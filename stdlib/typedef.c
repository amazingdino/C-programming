/*
   typedef
	- alias -> nickname
	- typedef [int/float/double/struct ...] [alisa]
*/
#include <stdio.h>
// typedef int andy;
typedef struct {
	char *name; // ["andy","tony","daniel",...]
	int age;
	char gender;
} personal_info;
	
int main(){
	personal_info andy = {"andy", 23, 'M'};
	printf("%s %d %c\n",andy.name,andy.age,andy.gender);
}
