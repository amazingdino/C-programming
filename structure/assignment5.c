#include <stdio.h>
// from 9:01 to 9:32
void reverse_array(int *arr, int n)
{
    int i, new_arr[n]; //new_arr[5] at the moment

    // *p => 마지막으로 포이팅해서 그대로 하나씩 프린트
    for(i=1; i<=n; i++)//i=4
    {
        printf("%d", *(arr+n-i));
    }


    // for(i=0; i < n; i++)
    // {
    //     new_arr[i] = *(arr+i); //store in the value of the array into new array
    // }

    // for(i=0; i<n; i++) //start i = 4 because index is 4 (but the whole point of this is to use pointer)
    // {
    //     arr[i] = new_arr[n-1-i]; //now store back the new array into array but in reverse order
    // } //arr[4-4=0] = new_arr[4]; wrong (x)
    // arr[0] = new_arr[5-1-0=4]
}

int main(void)
{
    int i;
    int arr[5] = {1,2,3,4,5};
    int *p = arr;

    reverse_array(p, 5);

    // for(i=0; i<5; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    
    return 0;
}