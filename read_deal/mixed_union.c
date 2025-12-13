#include <stdio.h>
//to store any kind of numbers into 1000 arrays

#define INT_KIND 0
#define DOUBLE_KIND 1

typedef struct
    {
        int kind; //tag field?
    union
    {
        int i;
        double d;
    }u;
    } Number;

void print_number(Number n);

int main(void)
{
    // Number number_array[1000];

    // number_array[0].i = 5;
    // number_array[1].d = 8.395;

    // printf("%d\n", number_array[0].i);
    // printf("%lf\n", number_array[1].d);
    Number n;

    n.kind = INT_KIND;
    n.u.i= 82;

    print_number(n);

    return 0;
}

void print_number(Number n)
{
    if(n.kind == INT_KIND)
    {
        printf("%d", n.u.i);
    }
    else
    {
        printf("%lf", n.u.d);
    }
}