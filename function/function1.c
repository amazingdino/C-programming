#include <stdio.h>

double average (double a, double b) 
// making a new function (putting in the mathematics equation into function (average))
// Also when stating the parameters (a,b), we must specify the type for each parameters.
{
    // double sum;
    // sum = a + b;
    // return sum / 2; (this could also work)
    return (a + b) / 2;
}

int main(void)
{
    double a, b;

    printf ("Get two numbers: ");
    scanf ("%lf %lf", &a, &b);
    printf ("Average is %g\n", average(a, b)); // here is where we use it and calculate for us.

    return 0;
}
