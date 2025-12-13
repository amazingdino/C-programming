#include <stdio.h>
#include <stdlib.h>

//i don't understand this one
void(*pf)(int);

void(*file_cmd [])(void) = 
{   
    new_cmd,
    open_cmd,
    close_cmd,
    close_all_cmd,
    save_cmd,
    save_as_cmd,
    save_all_cmd,
    print_cmd,
    exit cmd
};

int main(void)
{

    int a = 1;

    (*pf)(a);
    // or
    pf(a);

    return 0;
}