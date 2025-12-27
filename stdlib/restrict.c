#include <stdio.h>

//restricted pointer = when value is modified, only the pointer p can access that value (restricted)
//structure
int main(void)
{
    int * restrict p; // const int *p;(similar)
    int * restrict q; 

    p = malloc(sizeof(int));
    if(p == NULL)
    {
        printf("failed\n");
        return 1;
    }

    q = p; // made it as aliases.

    *q = 0; // undefined since you can't change value for p(?)

    return 0;
}