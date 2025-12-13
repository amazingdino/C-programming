#include <stdio.h>
#include <stdlib.h>

// void *calloc*(size_t nmemb, size_t size); how it's function called in stdlib.h

int main(void)
{
    int *a;

    a = malloc(10 * sizeof(int));

    a = calloc(10, sizeof(int)); // resets initialize to 0
    
    struct point 
    {
        int x,y;
    } *p;

    p = calloc(1, sizeof(struct point)); // p points to x and y which are initalize to 0



    return 0;
}