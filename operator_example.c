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

    a = b += c++ - d + --e / -f;

    // the order goes from postfix and prefix so
    // c++ => 3 plus 1 is 4 and --e 2-1 is 1
    // -f becomes -2 and so when u divide -1/2 is 0 because is a intejer value.
    // so if we put it out,
    //  

    printf("value of a is now = %d", a);

    return 0;
}