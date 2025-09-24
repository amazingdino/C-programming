/* 
* how to use the directives efficiently.
* In this case, we know the freezing point is a constant value which is 32.0f. 
* Also the scale factor is a constant equation transforming celsius to fahrenheit.
* When we know the value is never going to change or is constant until the end of the code
* We use #define so that we don't have to write down the numbers all the time.
*/

#include <stdio.h>
#define FREEZING_PT 32.0f
#define  SCALE_FACTOR (5.0f / 9.0f)

int main (void)
{
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}