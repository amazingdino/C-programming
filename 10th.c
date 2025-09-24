/*
* This code is basically a usage of scanf + operator(which is the divider)
* The example below is to do a math calculations on the sum of two fractions
* Important to take away from this code is not getting mixed up for int type not able to do fraction
* We are only inputting whole numbers into the code and the output is also printing whole number
* On both up and down side of the fracion, so there is no use of *float* in this case
*/
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);
    
    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;
    printf ("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}