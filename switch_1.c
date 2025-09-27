/*
* This is an alternative code for if statement. You could use switch statement as well for a case like this
* It is a really simple code. It is a condition code where when one suits the number you input, it then prints
* what you wanted to print. 
* For example, in this code, when you input 3, it will output Good
*/

#include <stdio.h>

int main(void)
{
    int grade;

    scanf("%d", &grade);

    switch (grade)
    {
        case 4: printf("Excellent");
                break;
        case 3: case 2: printf("Good");
                break;
  /*     case 2: printf("Average");
                break;
                */
        case 1: printf("Poor");
                break;
        case 0: printf("Failing");
                break;
        default: printf("Illegal grade");
                break;
    }

    return 0;
}