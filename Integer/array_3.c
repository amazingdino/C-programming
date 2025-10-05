// Assignment (analyze the code) have to know 100% of the code (even the beginners will be able to know)

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false}; // all [10] are assigned as false [0~9]
    int digit;
    long n;

    printf ("Enter a number: "); // Enter a number: 10
    scanf ("%ld", &n); // Enter whatever number you want to input

    while (n > 0) // when we input a number we input has more digits, it repeats the process that much
    {
        digit = n % 10; // n divide 10 and the remaining, which means it will give us the last digit
        if (digit_seen[digit]) // digit_seen [0~9] => break
            break; 
        digit_seen[digit] = true; // digit_seen [digit > 10] => true
        n /= 10; // n / 10 =>
    }

    if (n > 0) // n > 0 print
        printf ("Repeated digit\n"); 
    else // n < 0 print
        printf ("No repeated digit\n");
    
    return 0;

}