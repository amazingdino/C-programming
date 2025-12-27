#include <stdio.h>
#include <stdlib.h>

typedef struct node //make a typedef struct node
{
    int value;
    struct node *next;//points to next node
} node;
//new_node->next = first

struct node *add_to_list(node *list, int n)
{
    node *new_node; //make a new node

    new_node = malloc(sizeof(node)); // give memories
    if(new_node == NULL) // this is to check malloc (good to always write this)
    {
        printf("Error: malloc failed in add_to_list\n");
        exit (EXIT_FAILURE);
    }
    new_node->value = n; // now put 'n' into new_node.value
    new_node->next = list; // now put 'list' as next so when we put *list as some other *(pointer), it will go to next one (node)
    return new_node; //returns new_node (I don't get how new_node->next is list, but where is node list?
}

struct node *read_numbers(void)
{
    node *first = NULL; //setting new node initializing as NULL
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for(;;)
    {
        scanf("%d", &n); //get a number for node
        if(n==0) //this is to execute the code by typing 0 so it will run until user types 0
        {
            return first;
        }
        first = add_to_list(first, n); // when its not 0, return first + value
        
    }
}

struct node *search_list(node *list, int n)
{
    while(list != NULL && list->value != n) //when list is not NULL + list's value is not 'n'
    {
        list = list->next; // idk
    }
    return list; //when it is NULL + 'n' = returns list
} 
//so we know this is node code and we are trying to add value into next node so it keeps linking like 1->next number->next number;
int main(void)
{

    node *first = NULL; //now this is the first node structure
    node *new_node;

    new_node = malloc(sizeof(node)); //makes a new node (size)

    (*new_node).value = 10; //we gave new_node value 10; (initialize)
    // we could also do new_node->value = 10;
    // or scanf("%d", &new_node->value);

    new_node->next = first; //now new node is pointing towards "first node". 
    first = new_node; // now new_node is first

    new_node = malloc(sizeof(node)); //makes a new size(but Idon't know how this makes a new )
    new_node->value = 20; //store 20 in the new space you just made above
    new_node->next = first; //now this new space insert at the front since its pointing at first
    first = new_node; // 20->10

    new_node = malloc(sizeof(node));
    new_node->value = 30;
    new_node->next = first;
    first = new_node; // 30->20->10

    node *twenty;// 20
    new_node = malloc(sizeof(node));
    new_node->value = 0;
    twenty = first->next; // 20
    new_node->next = twenty->next; // 0->10
    twenty->next = new_node; // 20->0->10

    //3b0->20->0->10
    new_node = malloc(sizeof(node));
    new_node->value = 0;
    new_node->next = first->next; // 0->20
    first->next = new_node; // 30->0->20->0->10
     
    node *q = first; //
	while(q!=NULL)
	{
		printf("Node: %d\n",q->value);
		q = q->next;
	}
    

    // // this is to use the add_to_list function to do all the things we did above (I think)
    // first = add_to_list(first, 10);//so in this case it was 20->10. now by doing this, its 10->20->10
    // first = add_to_list(first, 20);

    // printf("%d", new_node->value);
    
    free(new_node);

    return 0;
}






