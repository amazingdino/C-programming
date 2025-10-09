#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i<=3; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf ("%d %d\n", i, j);
        }
    }
    // printf ("")
    return 0;
}