#include <stdio.h>
#include <stdlib.h> // this has qsort which is the one below

// void qsort (void *base, size_t nmemb, size_t size, int (*compar) (const void *, const void *));

int compare_parts (const void *p, const void *q);

typedef struct part
{
    int number;
} part;

int compare_parts (const void *p, const void *q)
{
    const struct part *p1 = p;
    const struct part *q1 = q;
    if (p1->number < q1->number)
    {
        return -1;
    }
    else if (p1->number == q1->number)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

// int compare_parts (const void *p, const void *q)
// {
//     if (((struct part *) p) ->number <((struct part *) q) ->number)
//         return -1;
//     else if (((struct part *) p)->number ==((struct part *) q) ->number)
//         return 0;
//     else
//         return 1;
// } -- we could make the above code concise like this

//int compare_parts (const void *p, const void *q)
// {
//     return ((struct part *) p)->number -((struct part *) q)->number;
// } -- more concise by minusing the each number so it produces either negative, zero, and positive

// int compare_parts (const void *p, const void *q) 
// {
//     return strcmp(((struct part *) p)->name,((struct part *) q) ->name);
// } -- this is to compare through name instead of number (but in my typedef struct part doesnt have name so)
// if you want to use it, add name in the struct.

int main(void)
{

    part one;
    part two;

    one.number = 10;
    two.number = 20;

    int result = 0;

    result = compare_parts(&one, &two);
    printf("The outcome is %d\n", result);

    return 0;

}
