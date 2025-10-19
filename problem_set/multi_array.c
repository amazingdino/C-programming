// 3by3 array 에다 1 2 3 4 ... 9 입력
// 행별로(row) 3개, 열별로(col) 3개 
// each row (123) = arr[0] = 6, arr[1] = 15, arr[2] = 24;
// 2x3 => 3x2 Transpose rol -> col col -> row
// 3x3 => among 9 numbers, print the maximum value number, and the location of its index
// counter clockwise 90 degree to the left
#include <stdio.h>

int main(void)
{
    int i, j, sum = 0; 
    int max = 0; 
    int arr[3][3];
    int x_idx, y_idx;


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf ("%d", &arr[i][j]);
        }
    }
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max < arr[i][j])
            {
                max = arr[i][j];
                x_idx = i;
                y_idx = j;
            }
        }
    }
    printf ("%d\n", max);
    printf ("%d %d", x_idx, y_idx); // 2, 1 since it starts from 0



    


    // int arr[2][3] = {1,2,3,4,5,6};
    // int new_arr[3][2] = {0};
    
    // for(i=0; i<2; i++) // [0,1, 0,2 0,3 1,0]
    // {
    //     for(j=0; j<3; j++)
    //     {
    //         new_arr[j][i] = arr[i][j];
    //     }
    //     // printf ("%d\n", new_arr[j][i]);
    // }

    // for (i=0; i<3; i++)
    // {
    //     for (j=0; j<2; j++)
    //     {
    //         printf("%d", new_arr[i][j]);
    //     }
    //     printf("\n");
    // }


    
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9}; // 3x3 matrix 



    // for(i=0; i<3; i++)
    // {
    //     sum = 0;
    //     for(j=0; j<3; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    //     printf ("%d\t", sum);
    //     // arr[i][0] = sum; // 45
        
    // }
    


    // for(i=0; i<3; i++) // (sum of the array)
    // {
    //     for(j=0; j<3; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    // }
    // printf ("%d", sum);

    //printf("print the orders %d", arr[2][2]);
    // (trying to print the first three coloumn(vertical) and then three rows(horizontal))
    // we have to repeat 3times for 3 different results
    // for (i=0; i <3; i++) // new line
    // {
    //     for (j=0; j <3; j++) // print 1 coloumn, 2nd coloumn  //j =3 => i = 1
    //     {
    //         printf("%d", arr[i][j]); // 
    //     }
    //     printf("\n");
    // }
    // for (i=0; i<3; i++) // 
    // {
    //     for (j=0; j<3; j++)
    //     {
    //         printf("%d", arr[j][i]);
    //     }
    //     printf("\n");
        
    // }
    

    // 147 258 369 (0,0)= 1(1,0) = 4 (2,0) = 7

    // printf("Printing the rows of the array %d", array[0][3]);
    // printf("Printing the coloumn of the array %d", array[3][0]);

    return 0;

}