// basic introduction on how to use scanf + how placing a number infront of the placeholder (%d) would
// print the numbers 
// eg) %1,2,3,4d = going up from ones, tens, hundreds, and more.

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf ("Enter the first (single) digit:");
    scanf ("%2d", &d);
    printf ("%d", d);
    return 0;
}