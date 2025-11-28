#include <stdio.h>

int change(int *p){
	*p = *p + 5;
	return *p;
}

int main(){
	int n = 1;
	int a;
	// int *a = &y;
	a = change(&n);
	printf("%d\n", a);

	printf("%d\n", n);
	return 0;
}