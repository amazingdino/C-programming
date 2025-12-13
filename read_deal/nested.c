#include <stdio.h>

#define FIRST_NAME_LEN 30
#define LAST_NAME_LEN 30

int main(void)
{
    struct person_name
    {
        char first[FIRST_NAME_LEN+1];
        char middle_intial;
        char last[LAST_NAME_LEN+1];
    };

    struct student
    {
        struct person_name name;
        int id, age;
        char sex;
    } student1, student2;

    strcpy(student1.name.first, "Fred"); // since we are copyingt his into the array
    // or student.name.first = "Fred"; => only if we made char *first;

    display_name(student1.name); // function just to call their full name so we don't have to call one by one.

    
    
    return 0;
}