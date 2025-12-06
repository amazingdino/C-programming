#include <stdio.h>

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{\
    return x > y ? x : y;\
}

int main(void)
{
    float x = 3.14;
    float y = 4.2;

    GENERIC_MAX(float)
    // float float_max(float x, float y)
    // {return x > y ? x : y;}
    

    return 0;
}