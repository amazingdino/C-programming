#include <stdio.h>

int main(void)
{
    int a[3][3], *p, i=0; // 0,0 0,1 0,2 => p++
    int j = 1; // 1,0 1,1 1,2 => p++
    int k = 2;

    for (p=a[i][i]; p < a[i][i] + 9; p++) // 
    {
        *p = 0; // p = a[0], p < a[0] + 3; p++
        // for (p=a[i][j]; p < a[i][j] + 3-1; p++)
        // {
        //     *p = 0;
        // }
    }

    for (p=a[j]; p < a[j] + 3; p++)
        {
            *p = 0;
        }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// void pointer (int n)
// {
//     int a[3][3], *p, i=0;
//     int j = 1;

//     for (p=a[i]; p < a[i] + 3; p++) // 
//     {
//         // *p = 0;
//         for (p=a[j]; p < a[j] + 3-1; p++)
//         {
//             *p = 0;
//         }
//     }
// }