#include <stdio.h>

int array_length (int arr[], int n)
{
    if (arr[0] == -1) 
    {

        return n;
    }
    else
    {
        return array_length (arr + 1, ++n);
    }
}

int main(void)
{
    int n = 0;

    int arr[] = {1,2,3,-1};

    printf("The length of this array is : %d", array_length(arr, n));

    return 0;

}