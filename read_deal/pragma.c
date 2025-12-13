#include <stdio.h>

/*
[4][4]...
[a _ _ _] [b1 b2 b3 b4]

*/
struct DefaultStruct {
	char a; // 1 byte
	// 3 byte (empty)
	int b; // 4 byte
}; // 8 byte

// fill per 1 byte
// [1][1][1][1]...
#pragma pack(push, 1)
struct PackedStruct {
	char a;
	int b;
}; // 1 + 4 = 5 byte
#pragma pack(pop)

int main(){
	printf("default: %zu\n", sizeof(struct DefaultStruct));
	printf("changed: %zu\n", sizeof(struct PackedStruct));
}
