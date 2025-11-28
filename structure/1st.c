#include <stdio.h>
/*
box: 1 2 3 4
idx: 0 1 2 3
adr: a b c d

*/
int main(){
	int arr[4] = {1,2,3,4};
	int *p = arr;

	p[1] = 10; // access to box

	*(p+2) = 20;

	for (int i=0;i<4;i++)
		printf("%d ", arr[i]);
	return 0;
}