#include <stdio.h>

#define CHECK_ZERO(divisor)\
    if(divisor == 0)\
        printf("*** Attempt to divide by zero on line %d of file %s ***\n", __LINE__, __FILE__)

int main(void)
{
    int i, k;
    int j = 0;

    CHECK_ZERO(j);
    return 0;
}