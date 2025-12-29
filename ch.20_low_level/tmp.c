//Get numbers of "N" array
// input the numbers you want to calculate sum and max for the array

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, N;
    int sum = 0;
    int max = -999999;

    printf("Type how many arrays you would like to input");
    scanf("%d", &N);

    int **arr =(int **)malloc(sizeof(int *)* N); // make multi-dimensional array space

    for(i=0; i<N; i++)
    {
        arr[i]=(int *)malloc(sizeof(int)* N); // make each array space
    }

    for(i=0; i<N; i++) //input numbers for space you made in array
    {
        for(j=0; j<N; j++)
        {
            scanf("%d", &arr[i][j]); //here
        }
    }

    for(i=0; i<N; i++)
    {
        sum = 0;
        for(j=0; j<N; j++)
        {
            sum += arr[i][j];
            
            if(max < arr[i][j])
        {
            max = arr[i][j];
        }
        }
        printf("The result %dth line array is = %d = %d\n", i, max, sum);
    }

    for(i=0; i<N; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}