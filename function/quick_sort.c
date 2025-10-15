#include <stdio.h>

#define N 10

void quicksort (int a[], int low, int high); // declaration on top to make definitions on the buttom
int split (int a[], int low, int high); // declarating in the beginning

int main (void)
{
    int a[N], i;

    printf ("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) // repeat 10 times since N = 10
    {
        scanf ("%d", &a[i]); // get the numbers from the user
    }
    quicksort(a, 0, N - 1); // quicksort is a, setting low to 0, setting high as 10-1

    printf ("In sorted order: ");
    for (i = 0; i < N; i++) // repeat 10 times since N = 10
    {
        printf ("%d", a[i]); // prints the orders in order
    }
    printf ("\n");

    return 0;
}

void quicksort (int a[], int low, int high)
{
    int middle;

    if(low >= high) return; // 
    middle = split(a, low, high);
    quicksort(a, low, middle - 1); // low => middle -1
    quicksort(a, middle + 1, high); // middle +1 => high
}

int split (int a[], int low, int high)
{
    int part_element = a[low];

    for(;;)
    {
        while (low < high && part_element <= a[high])
            high--;
        if(low >= high) break;
        a[low++] = a[high];

        while (low < high && a[low] <= part_element)
            low++;
        if (low >= high) break;
        a[high--] = a[low];
    }

    a[high] = part_element;

    return high;
}