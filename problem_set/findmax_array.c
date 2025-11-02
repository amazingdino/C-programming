#include <stdio.h>

// arr[idx] = 0
// idx += => to go onto the next array
// max < idx => save max == idx

int recursion (int arr[], int idx, int n, int max) // n=> number of numbers you are inputting
{
    if (arr[idx] == n)
        return arr[idx]; // setting arr[n] as max so it terminates
    else
    if (arr[idx] < arr[idx + 1])
        return arr[idx] = max;
    else
    printf("%d", max);
        return recursion (arr,idx + 1, n-1, max);
}


int main(void)
{
    int i;
    int arr[10] = {0};
    int max = 0;

    printf("Get your 10 numbers: ");

    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("The biggest value in the array is : %d", recursion(arr, 0, 10, max));

    return 0;

}