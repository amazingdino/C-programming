/*
* 5 4 3 2 1 stars pyramid
*
*/

#include <stdio.h>

int main(void)
{
    int i, j, k, l = 9;

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
// why there are so many 