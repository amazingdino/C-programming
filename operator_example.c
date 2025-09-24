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

    // the order goes from postfix and prefix so
    // c++ => 3 plus 1 is 4 and --e 2-1 is 1
    // -f becomes -2 and so when u divide -1/2 is 0 because is a intejer value.
    // so if we put it out,

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
    printf("value of a is now = %d", b += c++ - d + --e / -f);

    return 0;
}