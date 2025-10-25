#include <stdio.h>

int main(void)
{
    int i,j;
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int p[3][3] = {0};
    int top = 0;
    int left = 0;
    int diag = 0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if (i>0)
            {
                top = p[i-1][j];
            }
            else
            {
                top = 0;
            }
            if (j>0)
            {
                left = p[i][j-1];
            }
            else
            {
                left = 0;
            }
            if(i>0 && j>0)
            {
                diag = p[i-1][j-1];
            }
            else
            {
                diag = 0;
            }
            p[i][j] = arr[i][j] + top + left - diag;
        }
    }

    for (i=0;i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf ("%d\t", p[i][j]);
        }
        printf("\n");
    }
    return 0;
}