/*
* if you use while statement instead of do statement, it would only execute
* "The number has 0 digits since it won't execute at all because of value 0"
*/

#include <stdio.h>

int main (void)
{
    int n, digits = 0;

    printf ("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do{
        n /= 10;
        digits++;
    } while (n > 0);

    printf ("The number has %d digits(s). \n", digits);

    return 0;
}