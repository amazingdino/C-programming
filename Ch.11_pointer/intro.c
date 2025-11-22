#include <stdio.h>

int main(void)
{
    int i, *q, *p = &i;

    i = 1;
    
    printf("%d\n", i); // 1
    printf("%d\n", *p); // 1
    printf("%d\n", *&i); // 1

    *p = 2; // same as i since *p is pointing towards variable 'i

    printf("%d\n", *&i); // 2
    printf("%d\n", *p); // 2

    q = p;

    *q = 2;

    printf("%d\n", *&i);
    printf("%d\n", *q);
    printf("%p\n", &i); //stored in memory 
    int arr[3]; // X => DML (needs to use pointer)

    return 0;


}