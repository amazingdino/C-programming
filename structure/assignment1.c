#include <stdio.h>
// took around 7min 8:00 to 8:07

void swap(int *x, int *y)
{
    int z = *x; // by doing this, we won't lose *x's value because we store it on z
    *x = *y; // we store *y = which is b(2) into *x = which has 1 in it for now 2 -> stored in a in this case
    *y = z; // the value we saved for x into z are now replacing the value for *y which was 2 now is 1.
}

int main(void)
{

    int a = 1;
    int b = 2; 
    int *p = &a;
    int *q = &b;

    swap(p, q);

    printf("%d %d\n", a, b);

    return 0;

}