#include <stdio.h>
#include <string.h>

// searching for the end of string

size_t strlen(const char *s);

int main(void)
{
    int a = 0;
    const char *str = "abc";

    a = strlen(str);

    printf("Total number of string is %d", a);

    return 0;

}

size_t strlen(const char *s) // '\0'
// keeps on track of how many characters have been seen so far
{
    const char *p = s;
    printf("%p\n", s);
    while (*s) 
    {
        s++;
        printf("%p\n", s);
    }
    return s - p;
}
