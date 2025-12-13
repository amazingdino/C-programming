#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// struct vstring
// {
//     int len;
//     char chars[1]; //it wastes memory when you fix it like me(?)
// };

// int main(void)
// {
//     struct vstring *str = malloc(sizeof (struct vstring) + n - 1); //n-1 for maximzing space
//     str->len = n;


//     return 0;
// }

struct vstring
{
    int len;
    char chars[]; //old c could not do this, but now it can
};

int main(void)
{
    int n = 1;

    struct vstring *str = malloc(sizeof(struct vstring) + n); // maximizes space as I said
    str->len = n;

    return 0;
}