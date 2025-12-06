#include <stdio.h>

#define PI 3.14159
#define TWO_PI (2*PI)
#define SIZE 256
#undef N //removes current define N (value) // to remove

int main(void)
{
    int BUFFER_SIZE;

    if(BUFFER_SIZE > SIZE) //SIZE = 256
    {
        puts("ERROR: SIZE EXCEEDED");
    }

    return 0;

}