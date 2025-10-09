#include <stdio.h>

int main(void)
{
    int a[10], i;

    for (i=0; i <=9; i++)
    {
        a[i] = 0;
        printf("%d\n", a[i]);
    }
    printf("%d\n", a[0]);
    return 0;
}