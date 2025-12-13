#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line(char str[], int n)
{
    int ch, i = 0;

    while(isspace(ch = getchar()));
    // controls the first while statement, calls getchar to read characters, stores character into ch
    // i don't get this one

    while(ch != '\n' && ch != EOF)
    {
        if(i < n)
        {
            str[i++] = ch;
        }
        ch = getchar();
    }
    str[i] = '\0';
    return i;
}

