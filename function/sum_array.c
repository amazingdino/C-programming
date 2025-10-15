#include <stdio.h>

// sum = sum + a[i] (repeat this by every n)
// sum = 0; 

void sum_array (int a[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += a[i];
        // printf("%d", a[i]);
    }
    printf("%d\n",sum);
}

int main(void)
{
    int a[]= {1, 2, 3, 4, 5};
    int length;
    length = sizeof(a) / sizeof(a[0]);
    printf ("The sum is ");
    sum_array (a, length);

    return 0;
}
