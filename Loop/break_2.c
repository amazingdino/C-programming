#include <stdio.h>

int main(void)
{
    int n;

    while (1)
    {
        printf ("Enter a number (enter 0 to stop): ");
        scanf ("%d", &n);
        if (n ==0)
            break;
        printf ("%d cubed is %d\n", n, n * n * n);
    }
    // for (;;)
    // {
    //     printf("Enter a number (enter 0 to stop): ");
    //     scanf("%d", &n);
    //     if (n == 0)
    //         break;
    //     printf("%d cubed is %d\n", n, n * n * n);
    // }
    return 0;
}