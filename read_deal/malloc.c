#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p = malloc(2500 * sizeof(int));
    if (p==NULL) // if((p = malloc(10000)) == NULL)
    // if(p==NLUL) = if(!p) // if(p != NULL) = if(p)
    {
        printf("Memory allocation failed\n");
    }
    p[0] = 10; //now use all the memories you have been provided
    p[1] = 20;

    free(p); //when done freeup the rest of the memories



    return 0;

}