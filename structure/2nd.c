#include<stdio.h>

int main(){
	int num = 1; // 0x13823
	int *p = &num; // ? -> 0x13823
	int **q = &p;
	printf("-------------------\n");
	printf("%9p %9p %9p\n",&num, p, q);
	return 0;
}
