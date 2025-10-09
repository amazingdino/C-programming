#include <stdio.h>
#include <stdbool.h>
// 각 한개 밸류 찍고
// 총 찍고
// length 찍고

int main(void)
{
    bool arr[10] = {false, true}; // 0,1,2,3,4,5...9 keep in mind there is no index 10
    // 0-9 false
    int i;

    //arr[0] = 10; //

    printf ("the total value in arr is %lu\n", sizeof(arr)); // Printing the total value stored in arr
    printf ("first value of sizeof arr is %lu\n", sizeof(arr[0])); // Printing each value stored in arr
    printf ("The array length is %lu\n", sizeof(arr)/ sizeof(arr[0])); // 80 / 8 = 10 Printed the length
    //printf ("The third index is %lf\n", arr[2]);//
    for (i=0; i<=9; i++) 
    {
        printf ("%d", arr[i]);
    }
    printf ("\n");

    return 0;
}