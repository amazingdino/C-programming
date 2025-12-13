#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char *p = malloc(4);

    free(p);

    strcpy(p, "abc"); // since we freed up p from pointing anywhere, it has no memory or stored anywhere
    // so trying to put something in p means you are putting some value in a space(literal universe)
    // thats why we call it dangling pointer because we have no control of the pointer now
    return 0;
}