#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;


int main(void)
{
    node *new_node;
    node *first = NULL;

    new_node = malloc(sizeof(node));
    new_node->value = 1;
    new_node->next = first; //1
    first = new_node->next;


    new_node = malloc(sizeof(node));
    new_node->value = 2;
    new_node->next = first;
    first = new_node->next; // 2->1



    
    printf("%d\n", first->value);
    printf("%d\n", );

    free(new_node);
    free(first);


    return 0;
}