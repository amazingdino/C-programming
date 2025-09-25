#include <stdio.h>

int main (void)
{
    int i;
    
    i = 10;
/*  
    do 
    {
        printf ("T minus %d and counting\n", i);
        i--;
    } while (i > 0); // After executing while statement, when it reaches the condition, it repeats the code
// until it doesn't meets the condition, it terminates the code.
*/

    for (i=10; i>0; i--)
    {
        printf("T minus %d and counting\n", i);
    }

    return 0;
}