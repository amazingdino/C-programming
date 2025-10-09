#include <stdio.h>

double average (double a, double b)
{
    return (a + b) / 2;
}

int main(void)
{
    double a, b;

    printf ("Get two numbers: ");
    scanf ("%lf %lf\n", &a, &b);
    printf ("Average is %g\n", average(a, b));

    return 0;
}
