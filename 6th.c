/*
* This code is to define when using different *types*, we use different *placeholder*.
* In this case, int = integer as %d, float as %f.
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;
    
    i = 10;
    j = 20;
    x = 43.2892f;
    y = 5527.0f;

    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    return 0;
}