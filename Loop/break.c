#include <stdio.h>

int main(void)
{
    int d, n;

    scanf("%d", &n);

    d = 2;
    while (d <n)
    {
        if (n % d == 0)
            printf("%d %d", n, d);
            break;
        d++;
    }
    // for (d = 2; d < n; d++)
    // {
    //     if(n % d == 0)
    //         printf("%d %d", n, d);
    //         break;
    //         // printf("%d", d);
    // } 

    return 0;
}