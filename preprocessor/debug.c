#include <stdio.h>

#define DEBUG 1 //if debug is 0 removes the below 4lines

#if !DEBUG //don't know how this works its new (somehow i added ! the code stated no error, so cool!)
printf("Value of i: %d\n", i);
printf("Value of j: %d\n", j);
#endif

int main(void)
{
    int i = 1;
    int j = 2;

    return 0;
}