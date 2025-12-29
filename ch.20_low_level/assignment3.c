// This problem is pretty hard :(
// integer N will be granted at first
// then i-th line will be granted i number of integers (1<=i<=N)
// Each line can have different length
// make int** and store each
// (use malloc)
// then print Sum and Maxinum value per line
// so we are trying to print each row's sum and max
// doesnt sound that hard but the above codes he wrote is a bit confusing
// also took around 2days because the code has an error and I cant figure it out (idk how to differ the)
// coloumn so the sum wont be added to all but only adding their lines only.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, N;
    int sum = 0;
    int max = 0;

    if (scanf("%d", &N) != 1 || N <= 0) // input N
        return 0;

    int **arr = (int **)malloc(sizeof(int *) * N); // form an array
    if (!arr)
        return 1;

    for(i=0; i<N; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) *N); // make array space
        if(!arr[i]) //prevention
        {
            for(k=0;k<i;k++)
				free(arr[k]);
            free(arr);
        }
        for(j=0; j<N; j++)
        {
            if(scanf("%d", &arr[i][j]) != 1) //get numbers we input
            {
                for(k=0; k<i; k++) // prevention again
                    free(arr[k]);
                free(arr);
                return 0;
            }
        }
    }

    for(i=0; i<N; i++) // now main part 
    {
        sum = 0; // key point is to reset sum before for(function) recalls
        for(j=0; j<N; j++)
        {
            sum += arr[i][j]; //get sum of the array

            if(arr[i][j] > max)
            {
                max = arr[i][j]; // find which is max
            }
        }
        printf("sum is %d %d\n", sum, max); //prints sum n max
        // but smt wrong with my sum I think it's the line? cuz its saving each col into whole sum
    }

    for(i=0; i<N; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
