#include <stdio.h>

int str_len(const char *str);

int main(void)
{
    const char *s = "character";
    int total = 0;
    total = str_len(s);
    printf("The total length of this character is :%d\n", total);
    return 0;
}

int str_len(const char *str)
{
    const char *p = str;
    int i, len = 0;

    while(*p != '\0')
    {
        p++;
        len++;
    }

    return len;
}