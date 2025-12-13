#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25

struct part {
    int number; //we made a struct by part(s)
    char name[NAME_LEN + 1]; //name
    int on_hand; //how many
    struct part *next; //points to next node
};

struct part *inventory = NULL; //we initialize the first node by doing NULL (so we can store later)

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main(void)
{
    char code;

    for (;;) {
        printf("Enter operation code: ");
        scanf(" %c", &code);
        while (getchar() != '\n')
            ;

        switch (code) {
            case 'i': insert(); break;
            case 's': search(); break;
            case 'u': update(); break;
            case 'p': print();  break;
            case 'q': return 0;
            default:  printf("Illegal code\n"); break;
        }

        printf("\n");
    }
}

struct part *find_part(int number) //returns the node with that number, or else returns NULL(since we couldn't find it)
{
    struct part *p; //get the node

    for (p = inventory;p != NULL && number > p->number; p = p->next);// I don't get this part,
    if (p != NULL && p->number == number)// when it's not NULL + p->number matches with the number
        return p; //returns the node (so returns the part you tried to find)

    return NULL; // else NULL
}

void insert(void)
{
    struct part *cur, *prev, *new_node;// current, previous, new_node

    new_node = malloc(sizeof(struct part)); //now allocate memory into new_node (made a new space for new_node)
    if (new_node == NULL) {
        printf("Database is full; can't add more parts.\n"); //as I said always good to write this code down as practice
        return;
    }

    printf("Enter part number: ");
    scanf("%d", &new_node->number); //store the part number into new_node so 4 = &new_node->number

    for (cur = inventory, prev = NULL;cur != NULL && new_node->number > cur->number; prev = cur, cur = cur->next);
    // i don't get what it means by when current node = inventory like when I intialized as NULL
    if (cur != NULL && new_node->number == cur->number) //when current node is not NULL + new_node's number matches current node's number
    {
        printf("Part already exists.\n"); //this is to prevent from duplicating since printf says part already exists.
        free(new_node); //free up the space now that you borrowed
        return;
    }

    printf("Enter part name: ");//i think this is to find the part name when entered
    read_line(new_node->name, NAME_LEN); //but I think this is the wrong function cuz it doesnt make sense from my readline.h

    printf("Enter quantity on hand: "); //this is to store value into new_node's quantity ->on_hand
    scanf("%d", &new_node->on_hand);

    new_node->next = cur; //now points to current node

    if (prev == NULL)
        inventory = new_node; //stores new_node into first node(front)
    else
        prev->next = new_node; //or stores in prev's next(?)
}

void search(void)
{
    int number;
    struct part *p; //get the node

    printf("Enter part number: ");
    scanf("%d", &number);//put number in node's number

    p = find_part(number); //now rmb where we did above to find the node with that number?
    if (p != NULL) //when it finds the part,
    {
        printf("Part name: %s\n", p->name); //displays name
        printf("Quantity on hand: %d\n", p->on_hand); //displays quantity
    } else 
    {
        printf("Part not found.\n"); //and when it didnt find the part;
    }
}

void update(void)
{
    int number, change;
    struct part *p; //get the node

    printf("Enter part number: ");
    scanf("%d", &number); //again get number for the part you are trying to find

    p = find_part(number); //find it
    if (p != NULL) //now as well when u found it
    {
        printf("Enter change in quantity on hand: ");
        scanf("%d", &change); //this is to get the new number you would liek to change for quantity 
        p->on_hand += change; //now replace the original number for quantity(on_hand) to change or is to add not change
    } else 
    {
        printf("Part not found.\n"); //prints when you input wrong number cuz there isnt a node with that part number
    }
}

void print(void)
{
    struct part *p; //get the node

    printf("Part Number   Part Name                 Quantity on Hand\n");
    // now display all of the number, name, on_hand;
    for (p = inventory; p != NULL; p = p->next) 
    {
        printf("%7d       %-25s  %11d\n",p->number, p->name, p->on_hand);//this is to displays
    }// %7d = prints 7 digits, %-25s = prints 25 charaters + with extra 25 space if it's written less
    // %11d prints 11 digits.
    //so when there is + infront = prints from the right
    // - infront = prints from the left.
}