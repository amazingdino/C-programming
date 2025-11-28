#include <stdio.h>
#include <string.h>

// searching for the end of string

size_t strlen(const char *s);

int main(void)
{
    int a = 0;
    const char str[100] = "abc";
    const char *p = &str;

    a = strlen(p);

    printf("Total number of string is %d", a);

    return 0;

}

size_t strlen(const char *s)
// keeps on track of how many characters have been seen so far
{
    const char *p = s;
    while (*s)
    {
        s++;
    }
    return s - p;
}