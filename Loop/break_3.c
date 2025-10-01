#include <stdio.h>

int main (void)
{
    int i, sum, n;

    n = 0;
    sum = 0;
    while (n < 5)
    {
        scanf ("%d", &i);
        if (i == 0)
            continue;
        sum += i; // sum = sum + i;
        n++;
    }
    return 0;
}