#include <stdio.h>

#define TOUPPER(c) ('a' <= (c) && (c) <= 'z'?(c) - 'a' + 'A':(c))
// determines whether c is between a or z   


int main(void)
{
    char str[100] = 'g';
    int i = 0;

    if(TOUPPER(str))
    {
        printf("alphabet is between a and z");
    }



    return 0;
}