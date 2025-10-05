#include <stdio.h>

#define N 10

int main(void)
{
    int a[N], i;

    printf ("Enter %d numbers: ", N); // Enter 10 numbers:
    for (i = 0; i < N; i++){ // 10times repeat
        scanf ("%d", &a[i]); // (input which ever order you want the numbers to be in)
    }
    printf ("In reverse order: "); // In reverse order:
    for (i = N - 1; i >= 0; i--){ // 10 times repeat
        printf (" %d", a[i]); // i = 9; a[9] last number you input prints
    }
    printf ("\n");

    return 0;
}