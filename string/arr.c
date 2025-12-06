#include <stdio.h>
#include <string.h>

size_t arrlen(const int *s);

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int a = 0;
    int *p = arr;

    a = arrlen(arr);
    printf("%d", a);

    return 0;
}

size_t arrlen(const int *s)
{
    const int *p = s;
    printf("%p\n", s);

    while(*s)
    {
        s++;
        printf("%p\n", s);
    }
    
    return s - p;
}
