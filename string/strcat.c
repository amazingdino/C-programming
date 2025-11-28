#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char str5[100];

    strcpy(str1, "abc");
    printf("str1 is %s\n", str1); // abc
    strcat(str1, "def");
    printf("str1 now is %s\n", str1); // abcdef
    
    printf("--------------\n");

    strcpy(str2, "abc");
    strcpy(str3, "def");
    strcat(str2, str3);
    printf("str2 is %s\n", str2); // was abc then code above made it connect def
    printf("str3 is %s\n", str3); // def

    printf("--------------\n");

    strcpy(str4, "abc"); // we use strcat to connect the function behind which is defghi
    strcpy(str5, "def"); // below code made it defghi
    strcat(str4, strcat(str5, "ghi"));
    printf("str4 is %s, str5 is %s\n", str4, str5); // made it abcdefghi



    return 0;
}