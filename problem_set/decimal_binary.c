// decimal to binary

#include <stdio.h>

void deci (int i) 
{
    if(i == 0)
    {
        return;
    }
    deci (i/2);
    printf("%d", i%2);
}   

int main(void)
{
    
    int i;

    printf("Get your decimal: ");
    scanf("%d", &i);

    printf("Your binary number is: ");
    deci(i);

    return 0;
}