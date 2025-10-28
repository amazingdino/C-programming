#include <stdio.h>

int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n * fact(n-1);
        // 5 * ()
}

int fact_1(int n)
{
    return (n<=1 ? 1 : n*fact(n-1));
}

int fact_2(int n)
{
    int arr[10]={0};
    if (n<=1)
        return 1;
    else
        arr[n] = n * fact_2(n-1);
    return arr[n];
}

int main(void)
{
    int i;

    printf("Write your number to get factorial:");
    scanf("%d", &i);

    printf("The factorial of the number %d", fact_2(i));

    return 0;
}