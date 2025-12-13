#include <stdio.h>
#include <stdlib.h>
typedef struct Node { // make a typedef struct named Node so we can use it like type (int, struct, float...)
	int kind;
	union {
		int i;
		double d;
	} u; //up until here is int and double, putting it into union and giving alias 'u'.
	struct Node *next; // now this is where linked lists comes in where you call Node again as a struct then putting *next (pointer).
} Node;

int main(){
	// linked-list cannot exist without malloc
	Node *newNode = (Node*)malloc(sizeof(Node)); //we must give memory to Node so we can use the amount of memories we were provided
	if(newNode == NULL){ // by using sizeof(Node), then free up later when we are done using it.
		printf("fail to malloc\n");
		return 1;
	}
	newNode->kind = 0; //initial first assigning.
	newNode->u.d = 0.0;
	newNode->next = NULL;
	//second node
	Node *second = (Node*)malloc(sizeof(Node)); //here is the second node that we are trying to link with.
	if (second == NULL){
		printf("fail to malloc\n");
		return 1;
	}
	second->kind = 1; // second initializing
	second->u.d = 1.0;
	second->next = NULL;

	// link!!!!!!
	newNode->next = second; // rmb the *next after on line9(struct Node *next), here is where we initialize next as second(node)

	Node *curr = newNode; //this is to check our current node
	while(curr!=NULL)
	{
		printf("Node: %d\n",curr->kind);
		curr = curr->next;
	}

	
	
	// free
	free(second);
	free(newNode);
	return 0;
}
