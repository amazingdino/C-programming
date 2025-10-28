#include <stdio.h>

int fibo(int n)
{
    if (n < 2)
        return n;
    else
        return fibo(n-2) + fibo (n-1);
}

int main (void)
{

    printf ("%d", fibo(6));

    return 0;

}
