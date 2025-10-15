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
    int part_element = a[low]; // 5

    for(;;)
    { // low = 2, high = 4, part_elemnt 5
        while (low < high && part_element <= a[high]) // (2 < 4 && 5 <= 9)
            high--; // 4 - 1 =3;
        if(low >= high) break; // (2 >= 3) = X;
        a[low++] = a[high]; // a[2] => a[3] => 4;
// low = 3, high = 3 low =1, high =8 => 
        while (low < high && a[low] <= part_element) // (3 < 3 = X)
            low++; //
        if (low >= high) break; // (3 >= 3) break O;
        a[high--] = a[low]; // a[5] = a[2] => 8
    } //

    a[high] = part_element; // a[3] = 5 => WRONG since it has to be a[4] not a[3]. do the calculation again
    // 

    return high;
}