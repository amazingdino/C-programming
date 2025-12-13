#include <stdio.h>

#define NAME_LEN 30

int main(void)
{
    struct parts
    {
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } part1 = {528, "Disk drive", 10}, part2 = {914, "Printer cable", 5};
    // part1.number = 258 (changes the number above)
    // part1.number++; (could also use postfix)
    // struct parts part1 = {528, "Disk drive", 10}
    // scanf("%d", &part1.number);

    struct human
    {
        char name[NAME_LEN+1];
        int number;
        char sex;
    } employee1, employee2;

    typedef struct // i want to know the exact way of usage of why it uses it and more
    {
        int number;
        char name[NAME_LEN+1];
        int on_hand;
    } Part;

    Part a; 



    return 0;

}