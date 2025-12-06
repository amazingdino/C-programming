#include <stdio.h>

int main(void)
{
    int i;
    char arr[5] = {'a','b','c','d','e'};

    char *p = arr;

    for(i=0; i<5; i++)
    {
        printf("%p\n", p+i);
    }

    return 0;

}
