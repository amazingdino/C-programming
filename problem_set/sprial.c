#include <stdio.h>
#define N 3

void Spiral(int r, int c, int a[r][c]);

int main()
{
	int arr[N][N] = {1,2,3,4,5,6,7,8,9};
	Spiral(N,N,arr);
}

void Spiral(int r, int c, int a[r][c]){
	// init
	int top=0, bottom = r - 1;
	int left=0, right = c - 1;
	
	while(top<=bottom && left<=right)
    {
		// top 행 (왼 -> 오)
		for (int j=left; j<=right; j++)
			printf("%d ", a[top][j]);
		top++; // top = 1 -> 2
		// right 열 (위 -> 아래)
		for (int i=top;i<=bottom;i++)
			printf("%d ", a[i][right]);
		right--; // right = 1 -> 0
		// bottom 행 (오 -> 왼)
		if (top <= bottom){
			for (int j=right;j>=left;j--)
				printf("%d ", a[bottom][j]);
			bottom--; // bottom = 1 -> 0
		}
		// left 열 (아래 -> 위)
		if (left <= right){
			for (int i=bottom;i>=top;i--)
				printf("%d ", a[i][left]);
			left++; // left = 1
		}
	}
	printf("\n");

    return 0;
}