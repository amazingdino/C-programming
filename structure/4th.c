#include <stdio.h>

/*
	struct
		- Andy
			- age
			- gender
		- Juan
			- age
			- gender
*/
struct Human {
	int age;
	char gender; // gender
};

int main(){
	struct Human Andy = {23, 'm'};
	struct Human Juan = {27, 'm'};
	printf("----------------------\n");
	printf("Andy: age %d gender %c\n",Andy.age, Andy.gender);
	printf("Juan: age %d gender %c\n",Juan.age, Juan.gender);
	
	struct Human *p = &Andy;
	p->age = 10; // method 1
	p->gender = 'f';
	printf("%d %c\n",(*p).age,(*p).gender);

	(*p).age = 23; // method 2
	(*p).gender = 'f';
	printf("%d %c\n",p->age,p->gender);
	return 0;
}