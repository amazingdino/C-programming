#include <stdio.h>

int find_largest(int *a, int n);

void store_zeros(int a[], int n);

int find_largest(int *a, int n)
{
    int i, max;

    max = *a;
    for(i=1; i<n; i++)// i=1; i<5; i++
    {
        if (*(a+i) > max) // if 
        {
            max = *(a+i);
        }
    }
    return max;
}

int main(void)
{
    int arr[5] = {1,2,3,4,5}; //if we add const it doesnt change
    int biggest;
    int *a;
    a = &arr[0];

    biggest = find_largest(&arr[0], 5);

    printf("The biggest number is %d", biggest);

    return 0;

}

void store_zeros(int a[], int n)
{
    int i;

    for(i=0; i < n; i++)
    {
        a[i] = 0;
    }
}