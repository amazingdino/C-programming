#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{ // *int_part = long type pointer
    *int_part  = (long) x; // *(&p) = p <= long x so it changes to long type;
    *frac_part = x - *int_part; // 
    printf("%lf %ld %lf", x, *int_part, *frac_part);
}
// *(&p) => p;

int main(void)
{
    double i;
    long a;
    i = 1.3;

    decompose (i, &a, &i);

    return 0;
}