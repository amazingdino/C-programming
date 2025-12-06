#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100] = "abc";
    char str2[100] = "def";

    strncat(str1, str2, sizeof(str1) - strlen(str1) - 1);
    // terminates code at null, but strlen subtracts 1 so there are no space for null
    printf("%s %s", str1, str2);

    return 0;
}