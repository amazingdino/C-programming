#include <stdio.h> // 1 ~ N (5) => 1,2,3,4,5

int recursion(int n)
{
    if (n == 0)
        return 0;
    
    else
        return n + recursion (n-1);

}

int main(void)
{
    static int n;

    printf("get a number: ");
    scanf ("%d", &n);

    printf("the total is %d", recursion(n));

    return 0;
}