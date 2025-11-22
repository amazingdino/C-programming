#include <stdio.h>

int recursion (int arr[], int idx, int max)
{
    if (arr[idx] == -1)
    {
        return max;
    }

    if (arr[idx] > max)
    {
        max = arr[idx];
    }
    return recursion (arr, idx + 1, max);

}


int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,-1};
    int maximum = 0;

    printf("The biggest numebr is %d", recursion (arr, 0, maximum));

    return 0;
}