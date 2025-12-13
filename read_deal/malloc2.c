#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for EXIT_FAILURE

char *concat(const char *s1, const char *s2)
{
    char *result;

    result = malloc(strlen(s1) + strlen(s2) + 1);
    if (result == NULL)
    {
        printf("Error: malloc failed in concat\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}

int main(void)
{
    char *p;

    p = concat("abc", "def");

    printf("%s\n", p);

    return 0;
}