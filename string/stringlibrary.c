#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = "Hi my name is Andy";
    char str2[100];

    strcpy(str2, str);
    printf("%s\n", str2);
    printf("---------------\n");
    strncpy(str, str2, sizeof(str)-1);
    str[sizeof(str)-1] = '\0'; // str is always null terminated
    // even if strncpy fails to copy a null character from str2
    printf("%s\n", str);

    return 0;
}