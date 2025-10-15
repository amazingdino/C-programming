#include <stdio.h>

void decompose (double x, long int_part, double frac_part); // 

int main(void)
{
    double a, c;
    long b;

    printf ("Get a random number with decimals: \n");
    scanf ("%lf", &a);
    printf ("The result is: \n");
    decompose(a,b,c);
    return 0;
}

void decompose (double x, long int_part, double frac_part)
{
    int_part = (long) x;
    frac_part = x - int_part;
    printf("%lf %lu", frac_part, int_part );
}
