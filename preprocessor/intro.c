#include <stdio.h>

#define MAX(x,y) ((x) > (y) ? (x) : (y)) // now MAX behaves like function
#define IS_EVEN(n) ((n) %2 == 0)


int main(void)
{
    int i, j, k, m, n;

    i = MAX(j+k, m-n); // i = ((j+k) > (m-n) ? (j+k) : (m-n))

    if (IS_EVEN(i)) // true, it returns 1, when it's not returns 0; (boolean)
    {
        i++;
    }
    printf("%d", i);

    return 0;
}