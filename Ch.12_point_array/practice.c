#include <stdio.h>

int main(void)
{
    const int x = 5;
    int y = 10;
    int z = 3;

    const int *a = &x; // x value can't be changed, but address can
    printf("%d\n", *a); // 5
    a = &y;
    printf("%d\n", *a); // 10

    int * const b = &y; // y value can be changed, but address can not
    printf("%d\n", *b); // 10
    y = 20;
    printf("%d\n", *b); // 20

    const int * const c = &z; // neither z or address of c can be changed.
    printf("%d\n", *c); // 3
    // z = 5; // This would be error since its changing z's value.
    // c = &y;// This is also error since its changing c's address (where its pointing to)


    return 0;
}