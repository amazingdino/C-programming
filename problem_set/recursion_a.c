#include <stdio.h>

void print_int (int i)
{
    if (i < 0)
        return;
    // else
    printf("%d", i);
}

int main(void)
{
    int a = 3;

    print_int(a);

    return 0;
}