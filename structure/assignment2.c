#include <stdio.h>
//took me 8:09 to 8:15 but its printing 16 not 15? i set total to 0 fixed it minor mistake
int sum_array(const int *arr, int n) // variable can't be changed but we can change where its pointing to
{
    int i, total =0;

    for(i=0; i < n; i++)
    {
        total += *(arr+i);
    }
    return total;
}

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int sum;

    sum = sum_array (p, sizeof(arr)/sizeof(arr[0]));

    printf("%d\n", sum);

    return 0;
}