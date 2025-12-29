#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, N=0;
    int sum = 0;
    int max = -99999;

    printf("Get your number of array's you would like to print: ");
    scanf("%d", &N);

    int **arr = (int **)malloc(sizeof(int *) * N); //form an multi-di array
    
    for(i=0; i<N; i++)
    {
        printf("Now write the numbers for %dth array", i);
        arr[i] = (int *)malloc(sizeof(int) * N); //form each array
        for(j=0; j<N; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<N; i++)
    {
        sum = 0;
        for(j=0; j<N; j++)
        {
            sum += arr[i][j];

            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        printf("sum is %d %d\n", sum, max);
    }

    for(i=0; i<N; i++)
    {
        free(arr[i]); //free each array 
    }
    free(arr); //free multi-dimension array

    return 0;

}