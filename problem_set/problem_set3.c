/*
* Decimals to Binary using recursion
* In order to find the decimals to binary, you have divide the number by 2, then find it's reimaing
* which is by doing % to the number
*/

#include <stdio.h>

void converter(int n) // since it's a converter you don't return a int value (we do void here)
{
    if (n == 0) // when the number is 0 return nothing since 0 does not mean binary
        return;

    converter (n/2); // this is the way to do the convertion for decimals to binary
    printf("%d", n % 2); // divides by 2 then find the remaining of the the n by diving by 2 again
} // 

int main(void)
{
    int i;
    printf("Get your decimals:");
    scanf("%d", &i);

    if (i == 0)
        printf ("0");
    else
        converter(i);
    printf("\n");

    return 0;
}