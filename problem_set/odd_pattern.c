#include<stdio.h>
#define N 3

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
	int P[3][3] = {0}; // initialization

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			int top = (i>0) ? P[i-1][j] : 0;
			int left = (j>0) ? P[i][j-1] : 0;
			int diag = (i>0 && j>0) ? P[i-1][j-1] : 0;

			P[i][j] = arr[i][j] + top + left - diag;
		}
	}
	
	for (int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			printf("%d\n",P[i][j]);
	return 0;
}