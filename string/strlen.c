#include <stdio.h>
#include <string.h>

int main(void)
{
    int len, a, b, c;
    char str1[100];

    len = strlen("abc");
    printf("len is %d\n", len); // len = 3
    a = strlen(""); // a = 0
    printf("a is %d\n", a);
    strcpy(str1, "abc");
    b = strlen(str1);
    printf("b is %d\n", b);

    return 0;
}