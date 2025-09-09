#include <stdio.h>
/*
- function: main
    - input type: void
    - output type: int
    - statements:
        - float x: type float , variable x
        - scanf(): input function 
        - pruntf(): output function
*/
int main(void)
{
    float x; 
    scanf("%f", &x); 
    printf("x = %f", x);
    return 0;
}