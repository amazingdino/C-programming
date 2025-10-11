#include <stdio.h>

void print_count(int n)
{
    printf ("T minus %d and counting\n", n); 
    // put print_count as printf (dont have to type this whole printf statement from now on)
}

int main(void)
{
    int i;

    for (i = 10; i > 0; i--) // repeat at 10 and goes down by 1.
        print_count(i); // print the above printf statement by %d as i

    return 0;
}