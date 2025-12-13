#include <stdio.h>
/*
	[a] -> [b] -> Null
*/

typedef struct _Node {
	// a info
	int kind; // tag field 4bytes
	char name;
	union { // 8bytes
		int i;
		double d;
	} u;
	// b info
	struct _Node *next; // strtypedef struct _Node {
} Number; // 24bytes

int main(){
	Number c = {2,'c', .u.i=2, .next=NULL};
	Number b = {.kind = 1,'b', .u.i=1, .next=&c};
	Number a = {0,'a', .u.i=0, .next=&b};
	printf("a's next node =%c, %d\n",a.next->name, a.next->kind);
	printf("b's next node =%c, %d\n",b.next->name, b.next->kind);
}
