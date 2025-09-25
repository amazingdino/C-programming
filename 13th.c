/*
* All the C Operators in orders.
* You might wonder why I started from b += c++, but no matter what you do, it will end up adding b from the total sum
* Postfix > Prefix > Unary > Multiplicative > Additive
*/

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

    // printf ("%d\n", b += c++);
    // printf("%d\n", b); // b = 4 -> 7
    // printf ("%d\n", c); // c = 3 -> 4
    // // printf("%d\n", --e / -f);
    // printf ("%d\n", d + --e / -f); //since the type is int, the functions behind d terminates
    // printf ("%d\n", d) // d = does not change
    printf ("%d\n", b += c++ - d + --e / -f);

    return 0;
}