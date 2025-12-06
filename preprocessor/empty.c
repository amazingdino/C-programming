#include <stdio.h>

#define ADD(x,y) (x+y)
#define MK_STR(x) #x
#define JOIN(x,y,z) x##y##z

int main(void)
{
    int i,j,k;
    char empty_string[] = MK_STR(); // = " ";
    int JOIN(a,b,c), JOIN(a,b,), JOIN(a,,c), JOIN(,,c);
    // int abc        ab            ac          c;

    i = ADD(j,k); // i = (j+k);
    i = ADD(,k); // i = (+k);

    return 0;
}