/*
* This is how to build an inverse pyramid by using for statement.
* the i variable makes an empty normal pyramid 
* the j variable makes next line 
* the k variable makes the inverse pyramid
* the l variable makes the inverse pyramid print less by 2 (made it start at 9)
*/

#include <stdio.h>

int main(void)
{
    int i, j, k, l = 9;
    /*
    i=0; we have to assign the variable beforehand
    while (i<=5) // when using while (it must be the condition)
    {
        i++ // final movement in coding
    }
    */
    for(i=0; i<=5; i++) // i = 5 *****; i =4 OOOO
    {
        for(j=0; j<=i; j++) //  1 < 4 \n
        {
            printf(" ");
        }
        for(k=0; k<l; k++) // OOOOO *
        {
            printf("*");
        }
        printf("\n");

        l -= 2;
    }

    return 0;
}