#include <stdio.h>
#include <stdbool.h>

#define STACK_SIZE = 100

int contents[STACK_SIZE];
int top = 0;

void make_empty(void) // by making top back to 0, removes all the numbers above 0.
{
    top = 0;
}

bool is_empty(void) // when there is nothing on top of top, returns 0.
{
    return top == 0;
}

bool is_full(void) // when top is full, returns true (since STACK_SIZE is 100)
{
    return top == STACK_SIZE; 
}

void push(int i) // when you input a new number (== push)
{
    if(is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = i;
    }
}

int pop(void) // when we pop, it means to pop the top value
{
    if(is_empty())
    {
        stack_underflow(); // but when there is nothing to pop, its underflow
    }
    else
    {
        return contents[--top]; // when there is *top* value to pop, then reduces down 1 array
        // setting the array below as top
    }
}







