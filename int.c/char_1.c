#include <stdio.h>

int main(void)
{
    char ch;

    do 
    {
        scanf ("%c", &ch); // get an input for it
    } while (ch != '\n'); // loop when ch does not have next line

    return 0;
}
