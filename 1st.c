// This code is basic beginning of how to assign variables and giving them the right type and using
// multiplicative on the variables and see what you get as the result.

#include <stdio.h>

int main(void)
{

    int height, length, width, volume, weight=5;

    height =8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf ("Dimensions: %d * %d * %d\n", length, width, height);
    printf ("Volume (cubic inches): %d\n", volume);
    printf ("Dimensional weight (pounds): %d\n", weight);

return 0;
}