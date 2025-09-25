/*
* This is the first time trying if statement
* It will print Ture since 3 and 3 is equal to each other which makes the condition true
* if you put !=, it will not print since 3 and 3 DOES EQUAL each other.
*/

#include <stdio.h>

int main(void)
{

int a, b;

a = 3;
b = 3;

if (a == b) // expression = if condition (조건부)
{
    printf ("True");
}

return 0;
}