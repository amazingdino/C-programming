#include <stdio.h>

int main(void)
{
    char str[] = "Hello world Hi";

    printf("%5.4s\n", str); //
    printf("%.4s\n", str); //how many charaters from the front
    printf("%5s\n", str); // 

    int numebr[] = {1,2,3,4,5};

    printf("%4d\n");
    return 0;
}