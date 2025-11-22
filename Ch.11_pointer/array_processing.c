#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};
    int sum, *p;

    sum = 0;

    for(p = &a[0]; p < &a[5]; p++)
    {
        sum += *p;
    }

    printf("%d", sum);

    return 0;
}