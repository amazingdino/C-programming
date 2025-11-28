#include <stdio.h>

int get_char(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n') // for(i=0;), while(ch = (amount of characters))
    if (i<n)
    {
        str[i++] = ch;
    }
    str[i] ='\0'; // terminate (since we made it as a function)
    return i; // returns how many characters
}

int main(void)
{
    char str[50];
    int number;

    number = get_char(str, 10);
    
    printf("The total character number is: %d\n", number);

    return 0;

}