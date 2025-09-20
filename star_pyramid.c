// still curious how the variable "num" has been assigned by the value of 1 without giving him a value

#include <stdio.h>

int main(void)
{
    int i, j, k, num = 1;

    for(i=0; i<5; i++)
    {
        for(j=4; j>i; j--)
        {
            printf(" ");
        }
        //printf("%d\n",num); 
        for(k=0; k<num; k++)
        {
            printf("*");
        }
        printf("\n");
        
        num +=2;

    }

    return 0;
}   