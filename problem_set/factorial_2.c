#include <stdio.h>

int power(int x, int n)
{
    if(n<=1)
        return x;
    else
        return x * power(x, n-1);
}

int main(void)
{
    int i,j;

    printf("Get the number you would like to power by");
    scanf ("%d %d", &i, &j);

    printf ("The answer is: %d", power(i, j));

    return 0;
}