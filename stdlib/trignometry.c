#include <math.h>
#include <stdio.h>

void tabulate(double (*f)(double), double first, double last, double incr);

void tabulate(double (*f)(double), double first, double last, double incr)
{
    double x; // double x
    int i, num_intervals;

    num_intervals = ceil((last - first) / incr); //i assume ceil is the way to calculate final - intial then divide increament

    for (i = 0; i <= num_intervals; i++) //start i at 0, until how many numers, then increase by 1
    {
        x = first + i * incr; // so we store the value into x by calculating
        printf("%10.5f %10.5f\n", x, (*f)(x));
    }
}

int main(void)
{
    double final, increment, initial;

    printf("Enter initial value: ");
    scanf("%lf", &initial); // get inital value for x

    printf("Enter final value: ");
    scanf("%lf", &final); //get final value for x

    printf("Enter increment: ");
    scanf("%lf", &increment); //get increment value

    printf("\n   x       cos(x)\n");
    printf(" ---------------------\n");
    tabulate(cos, initial, final, increment); // prints cos(x)

    printf("\n   x       sin(x)\n");
    printf(" ---------------------\n");
    tabulate(sin, initial, final, increment); // prints sin(x)

    printf("\n   x       tan(x)\n");
    printf(" ---------------------\n");
    tabulate(tan, initial, final, increment); // prints tan(x)

    return 0;
}