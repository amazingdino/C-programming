#include <stdio.h>

typedef int *Fcn(void);
typedef Fcn *Fcn_ptr;
typedef Fcn_ptr Fcn_ptr_array[10];
Fcn_ptr_array x;

int main(void)
{
    int * (*x[10]) (void);
/* x =>
1. array of 
2. pointers to
3. functions with no arguments
4. returning pointer to int
*/
    return 0;
}