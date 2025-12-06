#include <stdio.h>

#define TWO_PI 2*3.14159 // we have to ask for this
#define SCALE(x) (x *10)

int main(void)
{
    int i = 0; 
    int j = 0;
    int conversion_factor = 0;

    conversion_factor = 360/TWO_PI;

    j = SCALE(i+1); // j  (i + 1 * 10)
    // but I took out the bracket from the #define ((x)*10)
    // so we wanted to scale it by 10 which was
    // j = (i+1) * 10 not j = (i + 10)



    return 0;
}