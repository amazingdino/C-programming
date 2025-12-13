#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, *q;

    p = malloc(1);
    q = malloc(1);
    free(p); // now frees p from pointing to anything now
    p=q;


    return 0;
}