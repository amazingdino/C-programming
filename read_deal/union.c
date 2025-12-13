#include <stdio.h>

int main()
{
//union manages the memory space as their biggest type it holds.
	// union Data
	// {
	// 	int i;
	// 	int age;
	// 	float f;
	// 	double c; // double is biggest so its 8 memory
	// 	char d;
	// } // 21 -> 8 (13bytes)
// andy.age tony.age

	union // why cant we use two unions just now for this code
	{
		int i;
		double d;
	} u = {0}; // u = {.d = 10.0};

	u.i = 82;
	u.d = 74.8;

	return 0;

}
