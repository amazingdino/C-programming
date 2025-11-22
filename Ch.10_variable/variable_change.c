#include <stdio.h>

int i = 3;

void print_i(void);

int main(void)
{
    i++;
    printf("%d", i);
    print_i();

    return 0;
}

void print_i(void)
{
    i++;
    printf("%d", i);

    return;
}
