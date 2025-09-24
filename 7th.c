/*
* when it comes to printf, the numbers between the placeholder becomes how many spaces before or after
* the number. 
* The main take away from this code is to tell the difference between the usage in PRINTF and SCANF
* SCANF = controls numbers of digits. // PRINTF = controls the width (spacing) of the code
*/

#include <stdio.h>

int main(void)
{
    int i;
    float x;

    i = 40;
    x = 839.21f;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}