#include <stdio.h>

int power (int x, int n); // declaration

int main(void)
{
    int a, b;
    printf("Put in your number\n");
    scanf ("%d %d", &a, &b);
    printf("The result is %d", power(a, b));

    return 0;
}

int power (int x, int n) // definition
{
    int i, result = 1;

    for (i = 1; i <= n; i++)
    {
        result = result * x;
    }
    return result;
}

