#include <stdio.h>
/*
   Stack vs Heap
	- Stack
		- int a;
	- Heap
		- loan
   Why?
   What is malloc?
	- borrow memory
	What is free?
	- return memory
*/		
#include <stdlib.h>
int main(){
	// memory -> heap
	//int *p =(int*)malloc(sizeof(int)*5); // heap: borrow 20bytes 
	int n;
	printf("how many students?: ");
	scanf("%d",&n);
	
	int *room_list = (int*)malloc(sizeof(int) * n);

	// if (p == NULL) -> fail => full memory
	if (room_list == NULL){
		printf("out of memory!\n");
		return 1;
	}

	// array
	for (int i=0;i<n;i++){
		room_list[i] = (i+1);
		printf("room number: %d\n",room_list[i]);
	}

	// free
	free(room_list);
	return 0;
}
