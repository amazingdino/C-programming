#include <stdio.h>

void *max(int *a, int *b)
{
    if (*a > *b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
}

int main(void)
{
    int a = 5;
    int b = 4;
    int *x = &a;
    int *y = &b;
    
    max(&a, &b);

    return 0;
}