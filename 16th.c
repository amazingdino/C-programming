/*
* This code is the application of if statement and using true or false statement to printf what we want
* When we input a number, it meets the condition if (a>b)
* Input a as higher value, it's true so you get first if, else prints else.
*/

#include <stdio.h>

int main (void)
{
    
    int a, b;

    scanf ("%d %d", &a, &b);
    if (a > b){
        printf("a is bigger than b");
    }
    else {
        printf("a is smaller than b");
    }
    return 0;
}