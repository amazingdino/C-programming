#include <stdio.h>
//from 8:31 to 9:01
int find_max(const int *arr, int n)
{
    int i, max = 0;
    for (i=0; i < n; i++)
    {
        if(*(arr+i) > max)
        {
            max = *(arr+i);
        }   
    }
    return max;
}

int main(void)
{
    int arr[] = {0,1,2,3,4};
    int *p = arr;
    int maximum = 0;

    maximum = find_max(p, sizeof(arr)/sizeof(arr[0]));
    printf("The maximum number from the array is : %d\n", maximum);

    return 0;

}