#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, *q;

    p = malloc(1); // points to one memory box
    q = malloc(1); // points to different memory box
    p = q; // now p is pointing to also where q is pointing to



    return 0;
}