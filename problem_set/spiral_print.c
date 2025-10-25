#include <stdio.h>

int main()
{
	int arr[3][3] = {0};
    int i,j;
    int top = 0;
    int bottom = 2;
    int left = 0;
    int right = 2;
    int num = 1;

    while (top <= bottom && left <= right)
    {
        for(i=left; i <= right; i++) // from left to right (0,0) to (0,2)
        {
            arr[top][i] = num++; // top is 0 where index is 0 and i increases where you have to print
        }
        top++; //adding 1 value so we could use the value of top later on

        for(i=top; i<= bottom; i++) // now from (0,2) to bottom (2,2) which is top to bottom
        {
            arr[i][right] = num++; // since 2 is constant and we are printing on the 2 coloumn, we use [right]
        }
        right--; // this time we minus the value so we could make all the value to 1 // explain later

        if(top <= bottom) // we use if because when we loop, we don't want to print when top is higher than bottom.
        {
            for(i = right; i>= left; i--) // now from // (2,2) we are going to the left (2,0)
            {
                arr[bottom][i] = num++; // 2 is constant on the row, we use bottom and from 2 to 0 so i--
            }
            bottom--; //again this value will be explained later
        }
        if(left <= right) // same as above we don't want left value to be higher than right then it would have wrong output
        {
            for(i=bottom; i>= top; i--) // from (2,0) to (1,0) because we are not trying to overlap
            {
                arr[i][left] = num++; // left is constant (0) so [i] goes from 1 to 
            }
            left++; // add +1 to left
        }
    }

    printf("Print the spiral order by numbers");
    for (i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf ("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
	
}