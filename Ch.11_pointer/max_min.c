#include <stdio.h>
// 10 numbers => which one is max which one is min

void max_min(int arr[], int N, int *max, int *min);

void max_min(int arr[], int N, int *max, int *min)
{
    int i;

    *max = *min = arr[0];

    for(i=1; i<10; i++)
    {
        if(arr[i] > *max)
        {
        *max = arr[i];
        }
        else if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
    // printf("%d %d\n", *max, *min);
}

int main(void)
{
    int i, n, big, small;
    int arr[10] = {0};

    printf("Get 10 random numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max_min(arr, 10, &big, &small);

    printf("%d %d", big, small);
    return 0;
}
