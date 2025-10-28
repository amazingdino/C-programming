/*
* find it's largest value from the array
*
*/

#include <stdio.h>

int max(int arr[], int n)
{
    if (n == 1)
        return arr[0]; // this means when there is only 1 array, print the first base element (which is only one)
    else
    return max(arr, n);


}

int main(void)
{
    int arr[5];
    int i;

    printf("Get your 5 numbers:");
    for(i=0; i<5; i++)
    {
    scanf ("%d", &arr[i]);
    }

    printf("The largest value is: %d\n", max(arr, i));
    return 0;
}