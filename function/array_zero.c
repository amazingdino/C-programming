// Make the code work 2D array with using function
#include <stdio.h>

int sum_two_d_array(int a[][2], int n)
{
    int i, j, sum;
    sum = 0;

    for(i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

int main (void)
{ 
    int a[3][2] = {1,2,3,4,5,6};
    int rows = sizeof(a) / sizeof (a[0]); // sizeof (a) = 6 / sizeof (a[0]) = 3 
    // int col = sizeof(a) / sizeof (a[][0]);
    int result = sum_two_d_array(a, rows); // (, 3)

    printf("%d", result);

    // sum_two_d_array (a,b,c);

    return 0;
}