/*
* This code is to receive an interest rate from the user
* then asks for number of years
* From getting interest rate and number of years, it will calculate from the intial balance which is 100
* And shows a table of bank interest (inflating interest rate by 1 every year)
*/
#include <stdio.h>
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main (void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf ("Enter interest rate: "); // get your interest rate
    scanf ("%d", &low_rate);
    printf ("Enter number of years: "); // get your number of years for interest
    scanf ("%d", &num_years);

    printf ("\nYears"); // from here is the table format
    for (i=0; i < NUM_RATES; i++) // each 
    {
        printf ("%6d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf ("\n");

    for (year = 1; year <= num_years; year++)
    {
        printf ("%3d    ", year);
        for (i=0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + i) / 100.0 * value[i];
            printf ("%7.2f", value[i]);
        }
        printf ("\n");
    }
    return 0;
}