#include <stdio.h>

void add(int *a, int *b, int n)
{
    int i, c = 0;
    for(i=0; i<n; i++)
    {
        printf("%d\n", c = a[i] += b[i]);
    }
    
}

int main(void)
{
    int *a[3] = {1,2,3};
    int *b[3] = {1,2,3};

    add(&a,&b,2);



}