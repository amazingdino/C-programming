#include <stdio.h>
#include <string.h>

struct catalog_item {
	int stock_number; // 4bytes
	union {
		struct {
			char *title; // 10bytes_?
			char *author; // 5bytes_?
			int num_pages; // 4bytes
		} book; // 19 bytes
		struct {
			char *design; // 30bytes_?
		} mug; // 30 bytes
	} item; // 30 bytes printf("%s\n",c.item.book.title);
 35     printf("%s\n",c.item.mug.design);
}; // 34bytes

int main(){
	/*
		[store1]
			[book] [mug]
		-> how to manage these items?
		lets use stock_numbeitr
			- [book]: 0
			- [mug]: 1
		[store2]
			[pizza] [burger]

	*/
	struct catalog_item c;
	strcpy(c.item.book.title,"title");
	printf("%s\n",c.item.book.title); // hint!
	strcpy(c.item.mug.design,"cats");
	printf("%s\n",c.item.book.title);
	printf("%s\n",c.item.mug.design);
}
