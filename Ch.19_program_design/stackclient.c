#include <stdio.h>
#include "stackADT.h"

int main (void)
{
    Stack s1, s2;
    int n;

    s1 = create();
    s2 = create();

    push(s1, 1);
    push(s1, 2);

    n = pop(s1);// 2
    printf("Popped %d from sl\n", n); // popped 2
    push(s2, n); // pushed 2 into s2
    n = pop(s1); //now n is 1 popped
    printf("Popped %d from s1\n", n); // popped 1
    push (s2, n); // now pushed 1 as top

    destroy(s1); // s1 gone

    while (!is_empty(s2))
        printf("Popped %d from s2\n", pop(s2)); // popped 1 and 2

    push (s2, 3); //3 is top on s2
    make_empty(s2); // how this makes it empty, but it is
    if (is_empty(s2))
        printf("s2 is empty\n");
    else
        printf("s2 is not empty\n");

    destroy(s2);

    return 0;
}