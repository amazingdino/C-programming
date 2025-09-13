#include <stdio.h>
#define INCHES_PER_POUND 166
#define RECIPROCAL_OF_PI (1.0f / 3.14159f)

int main(void)
{

    int height, length, width, volume, weight;

    printf("Enter height of box:");
    scanf ("%d", &height);
    printf("Enter length of box: ");
    scanf ("%d", &length);
    printf ("Enter width of box:");
    scanf ("%d", &width);
    volume = height * length * width;
    // weight = (volume + 165) / 166;
    weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
    printf("1/pi = %f\n", RECIPROCAL_OF_PI);

    printf("Volume (cubic inches): %d\n", volume);
    printf ("Dimensional weight (pounds): %d\n", weight);
    
    return 0;
}