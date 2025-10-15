// Make the code work 2D array with using function

#include <stdio.h>
#define LEN 10

int sum_two_d_array(int a[][LEN], int n)
{
    int i, j, sum;
    sum = 0;

    for(i = 0; i < n; i++)
    {
        for (j = 0; j < LEN; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

int main (void)
{
    int a[][LEN], length; 
    // a[][LEN] = {0};
    // length = sizeof(a) / sizeof(a[0]);
    a[3][2] = {1,2}, {1,2}, {1,2};
    int row = sizeof(a) / sizeof (a[0]); // sizeof (a) = 6 / sizeof (a[0]) = 3
    int col = sizeof(a) / sizeof (a[][0]);
    int result = sum_two_d_array(a, rows);

    printf("")

    sum_two_d_array (a,b,c);

    return 0;
}