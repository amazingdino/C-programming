// Make the code work 2D array with using function
#include <stdio.h>

int sum_two_d_array(int r, int c, int a[r][c])
{
    int i, j, sum;
    sum = 0;

    for(i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
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
    int cols = sizeof(a[0]) / sizeof (a[0][0]); // sizeof (a) = 6 / sizeof (a[0][0] = 2)
    int result = sum_two_d_array(rows, cols, a); // (, 3)

    printf("%d", result);

    // sum_two_d_array (a,b,c);

    return 0;
}