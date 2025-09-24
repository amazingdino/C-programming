/*
* This code is to know what to place for the variables when using printf and scanf
* PRINTF = only have to write the variable
* SCANF = you have to write & in front.
* this is to tell the scanf where the variable is located at.
*/

#include <stdio.h>

int main(void)
{
    int i, j;
    float x, y;

    scanf ("%d%d%f%f", &i, &j, &x, &y);
    printf("%d %d %f %f", i, j, x, y);

    return 0;
}