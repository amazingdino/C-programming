enum Weekday {
	MON, // 0
	TUE, // 1
	WED, // 2
	THU, // 3
	FRI, // 4
	SAT, // 5
	SUN //	6
};

#include <stdio.h>
int main(){
	enum Weekday today = SAT;
	printf("%d\n", SAT); // prints 5
}

