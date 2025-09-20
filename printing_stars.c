// for = Repeat. (int i = 0) => to start at 0, and for everytime i<5, it loops, then i increases by 1 due to i++
// (int j = 0) => starts from 0, and loops whenever j<and=i, it loops printing * and then increases j by 1.
#include <stdio.h>

int main(void)
{
    int i, j;

    for(int i=0;i<5;i++){ // for every i = 0 and j is less than 5, add 1 value to i after next code
        for(int j=0;j<=i;j++){ // and for every j = 0 and j is less than or equal to i add 1 value to j after next code
	        printf("*"); 
    }
        printf("\n");
}

return 0;
}