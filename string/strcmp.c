#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = "abc";
    char str2[100] = "abcd";
// also it keep in mind upper-case letters are smaller than lower-case letters
    if(strcmp(str, str2) < 0) // is str1 < str2? also could use <=
    {
        printf("since str is smaller than str2, it prints this");
    }
    else
    {
        printf("wrong so it won't print only here for providence");
    }

    return 0;
}