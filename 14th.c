/*
* This code is to understand what is the difference between / (dividing) and % (remaining)
* This is a really easy code it's just to see what you get for the remaining when you divide 5 by 3
*/

#include <stdio.h>

int main(void)
{
    int i, j;

    i = 5;
    j = 3;

    printf("%d %d", i / j, i % j); 

    return 0;
}