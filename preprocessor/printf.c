#include <stdio.h>

#define PRINT_INT(n) printf("%d\n",n)

int main(void)
{
    int i = 10;
    int j = 5;

    PRINT_INT(i/j);

    return 0;

}