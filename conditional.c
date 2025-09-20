//

#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 2;
    j = 1;
    k = i < j ? i : j;
    printf("k =%d", k);

    return 0;
}