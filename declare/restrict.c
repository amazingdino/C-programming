#include <stdio.h>

// no restrict
void add(int n, int *a, const int *b)
{
	for (int i=0;i<n;i++)
		a[i] += b[i];
}

// restrict
void add_restrict(int n, int *restrict a, const int *restrict b)
{
	for (int i=0;i<n;i++)
		a[i]+=b[i];
}

// print_arr(
static void print_arr(const int *x, int n)
{
	for(int i=0;i<n;i++){
		printf("%d",x[i]);
		if (i!=(n-1))
			printf(", ");
	}
	printf("\n");
}

int main()
{
	int a1[3] = {1,2,3};
	int b1[3] = {10,10,10};
    
	print_arr(a1,3);
	print_arr(b1,3);

	printf("no restrict\n");
	add(3,a1,b1);
	print_arr(a1,3); // 11,12,13

	int a2[3]={1,2,3};
	int b2[3]={10,10,10};
	add_restrict(3,a2,b2); //i get restrict is to not overlap each other (not access each other's memory)
	print_arr(a2,3); // so we did was just add each other array into one, but to make a error how?
	add_restrict(3, a2, a2); // 22, 24, 26
	print_arr(a2,3); // no error I thought if you overlap one array onto the same one would make an error
	add_restrict(3, b1, b2); // 20, 20, 20
	print_arr(b1, 3); // still no error so whole point is to not access each other's memory so
	// by not touching their address?

}