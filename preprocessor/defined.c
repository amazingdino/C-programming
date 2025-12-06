#include <stdio.h>

#if defined DEBUG
Since defined tests only whether DEBUG is defined or not, it's not necessary to give DEBUG a value:
#define DEBUG
#endif

int main(void)
{

    return 0;
}