#include <stdio.h>
#include <string.h>

void *memcpy (void *sl, const void *s2, size_t n);
void *memmove (void *s1, const void *s2, size_t n);
// they are same?

int main(void)
{
    int a[100];

    memmove(&a[0], &a[1], 99 * sizeof(int));

    return 0;
}