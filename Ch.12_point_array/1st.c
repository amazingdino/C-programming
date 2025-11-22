#include <stdio.h>

int main(void)
{
    int a[5], *p;

    printf("Enter 5 numbers: ");
    for(p=a; p < a + 5; p++)
    {
        scanf ("%d", p);
    }
    
    printf("In reverse order: ");
    for (p=a + 5 - 1; p >= a; p--)
    {
        printf(" %d", *p);
    }
    printf("\n");

    return 0;
}