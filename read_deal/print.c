#include <stdio.h>

// void print_part(struct part p);

// void print_part(struct part p)
// {
//     printf("Part number: %d\n", p.number);
//     printf("Part name: %s\n", p.name);
//     printf("Quantity on hand: %d\n", p.on_hand);
// }

int main(void)
{
    typedef struct 
    {
        int number;
        char name [61];
        int on_hand;
    } part1;

    // struct part build_part(int number, const char *name, int on_hand)
    // {
    //     struct part p;

    //     p.number = number;
    //     strcpy(p.name, name);
    //     p.on_hand = on_hand;
    //     return p;
    // }

    // part1 = build_part(528, "Disk drive", 10);

    // print_part(part1);

    print_part((struct part)
    {
        .on_hand = 10, .name = "Disk Drive", .number = 528
    });

    return 0;

}