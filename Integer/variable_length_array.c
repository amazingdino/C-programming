/*
* getting a number of numbers you would like to reverse in order
* eg) input 1\n 2\n 3\n 4\n => 4 3 2 1
*/


#include <stdio.h>

int main (void)
{
    int i, n;

    printf ("How many numbers do you want to reverse? ");
    scanf ("%d", &n); // get how many numbers you want to reverse

    int a[n]; 

    printf ("Enter %d numbers: ", n); // enter the amount of numbers you input
    for (i = 0; i < n; i++) // for when i starts at 0 and whenever i is smaller than n, it repeats i++.
    {
        scanf ("%d", &a[i]); // get the numbers you put into each value of 
    }
    printf ("In reverse order: ");
    for (i = n -1; i >= 0; i--)
    {
        printf (" %d", a[i]);
    }
    printf ("\n");

    return 0;
    
}