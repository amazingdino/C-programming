// integer variable N will be granted
// then N number of values will be granted
// store those values in to array
// (use malloc here!)
// output should be Maximum value and Avg
// so find max value + average
// 8:30 -> 10:17 (but actually took around 30min because I was just brainstorming)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, max=0; // values
    double average=0.0;
    double sum = 0.0;

    if (scanf("%d", &N) != 1 || N<=0) //get ur number here
    {
		return 0;
    }

    int *arr = (int *)malloc(sizeof(int) * N); //made a space with the size of N + *
    if (!arr)
    {
        fprintf(stderr, "malloc failed\n");
        return 1;
    }

    for(i=0; i < N; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            free(arr);
            return 0;
        }

        sum += arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    average = sum/N;

    printf("The max is this array is %d\n", max);
    printf("The average of this array is %lf\n", average);

    free(arr);

	return 0;
}

