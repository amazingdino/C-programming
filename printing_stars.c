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