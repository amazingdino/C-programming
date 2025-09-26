#include <stdio.h>

int main (void)
{
    int i, j, k, l;

    l = 9;

    i=0; // makes the empty pyramid 0 to 5
    while (i <= 5)
    {
        j=0; // makes the 
        while (j <= i)
        {
            printf (" ");
            j++;
        }
        k = 0;
        while (k < l)
        {
            printf ("*");
            k++;
        }
        printf("\n");

        l -= 2;
        i++;
    }
    return 0;
}