#include <stdio.h>

int recursion(int arr[], int n, int sum)
{
    if(arr[n] == -1)
    {
        return sum;
    }

    sum += arr[n]; // sum = 1
    
    return recursion(arr, n + 1, sum);

}

int main(void)
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,-1};

    int sum = 0;

    printf("The total sum of this array is %d", recursion(arr, 0, sum));

    return 0;
}