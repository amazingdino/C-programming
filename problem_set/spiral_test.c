#include <stdio.h>

int main (void)
{
    int i;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int top = 0;
    int left = 0;
    int bottom = 2;
    int right = 2;

    // top first 
    while (top <= bottom && left <= right)
    {
        for(i = left; i <= right; i++)
        {
            printf("%d", arr[top][i]); // 0,0 -> 0,2 // arr[1][1] => 
        top++; // top 1
        }
        // right top to right bottom
        for(i = top; i<= bottom; i++)
        {
            printf("%d", arr[i][right]); // 0,2 -> 2,2
            right--; // right 1
        }
        // 
        if(top <= bottom)
        {
            for(i = right; i<= left; i--)
            {
                printf("%d", arr[bottom][i]); // 2,2 -> 2,0
            }
            bottom--;

        }
        if(left <= right)
        {
            for(i=bottom; i<=top; i--) // i = 1; i<=1; i-- 
            {
                printf("%d", arr[i][left]); // -> 2,0 -> 1,0
            }
            left++; // 0-> 1
        }
    }


    return 0;

}
