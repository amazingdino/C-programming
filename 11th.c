/*
* This code is the usage of putting %1d in scanf to put a space in each numbers so you could input numbers by putting space
* You might not understand what this code is for: It's for checking the digit from barcode
* So, you can just look at the scanf and usage of equations to get the numbers
*/

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;

    printf("Enter the first (single) digit: ");
    scanf ("%1d", &d);
    printf("Enter first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5); 
    printf("Enter second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    first_sum = d + i2 + i4 + j1 + j3 + j5; // 19
    second_sum = i1 + i3 + i5 + j2 + j4; // 1 + 5 + 0 + 5 + 9 = 20
    total = 3 * first_sum + second_sum; // 57 + 20 = 77 

    printf("Check digit: %d\n", 9 - ((total - 1) % 10)); /*putting 1 more bracket for easier understanding*/

    return 0;
}
