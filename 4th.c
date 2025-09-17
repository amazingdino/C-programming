#include <stdio.h>

int main(void)
{
    int i;

    i = 3;
    /*i = i + 2;*/
    i %= 2;
    /*i = Diving i by 2 and the remaining and putting the result into variabel i;*/
    printf("%d", i);

    return 0;
}