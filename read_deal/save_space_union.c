#include <stdio.h>
#include <string.h>


int main(void)
{
    // struct catalog_item
    // {
    //     int stock_number;
    //     double price;
    //     int item_type;
    //     char title[50];
    //     char author[50];
    //     int num_pages;
    //     char design[50];
    //     int colors;
    //     int sizes;
    // };

    struct catalog_item
    {
        int stock_number;
        double price;
        int item_type;
        union
        {
            struct
            {
                char title[50];
                char author[50];
                int num_pages;
            }book;
            struct
            {
                char design[50];
            }mug;
            struct
            {
                char design[50];
                int colors;
                int sizes;
            }shirt;
        }item;
    };

    struct catalog_item c;

    strcpy(c.item.book.title, "Title");
    strcpy(c.item.mug.design, "Cats");

    printf("%s\n", c.item.book.title);
    printf("%s\n", c.item.shirt.design); // how two different input prints same Cats.

    return 0;
}