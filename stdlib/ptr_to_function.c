#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//now functions also have an address since it's occupying memory location right? because you are making something
// so pointer to function it might be new but familiar.
double integrate (double (*f)(double), double a, double b); //to combine
// i don't get this function tho

int main(void)
{
    double result = 0;
    double PI = 3.14; //says its not declared but i thougth math.h has PI's value

    result = integrate(sin, 0.0, PI / 2);
    printf("%lf\n", result); 

    return 0;
}