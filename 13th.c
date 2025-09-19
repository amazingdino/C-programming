#include <stdio.h>

int main(void)
{
    int a, b, c, d, e, f;
    a = 5;
    b = 4;
    c = 3;
    d = 2;
    e = 2;
    f = 2;

    /*a = b += c++ - d + --e / -f;*/
    /* order goes
    --e
    -f
    +
    -
    */
    // printf ("%d\n", b += c++);
    // printf("%d\n", b); // b = 4 -> 7
    // printf ("%d\n", c); // c = 3 -> 4
    // // printf("%d\n", --e / -f);
    // printf ("%d\n", d + --e / -f); //since the type is int, the functions behind d terminates
    // printf ("%d\n", d) // d = does not change
    printf ("%d\n", b += c++ - d + --e / -f);

    return 0;
}