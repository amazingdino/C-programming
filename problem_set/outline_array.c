

#include <stdio.h>
#define N 3

int main(void)
{
    int i,j, sum = 0;
    int arr[N][N]={1,2,3,4,5,6,7,8,9};

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            if(i==0 || i==N-1 || j==0 || j==N-1)
            {
                sum += arr[i][j];
            }
        }
    }

    printf("the sum of the outline of this array is %d", sum);
    
    return 0;
}