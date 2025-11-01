#include <stdio.h>

void reverse_string(char str[])
{
    if (str == '\0')
        return;
    else // HELLO = > H E L L O \0  HELLO O OL OLL
        reverse_string (str + 1); // O L L E H => 
        printf ("%s", str);
}

int main(void)
{
    char string[27];

    printf("Get your characters to print reversed:");
    scanf ("%s", string);

    printf("The reversed order is :");
    reverse_string(string);

    return 0;
}