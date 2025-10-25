// 1. 정사각형 배열에서 주대각선(1,5,9)과 부대각선(3,5,7)의 합을 각각 구해주세요.

// 2. 배열을 거꾸로 뒤집어주세요

// 3. 합이 가장 큰 행의 인덱스와 그 합을 찾아주세요.

// 4. 합이 가장 큰 열의 인덱스와 그 합을 찾아주세요.

// 5. 180도 clock wise 회전해주세요.

// 6. 배열에서 가장자리 합만 구해주세요 3x3 4x4 5x5 모름

// 7. 스칼라 곱
// ex)
//     1 2
//     3 4

//     사용자 입력값: 3
//     3 6
//     9 12

// 8. 두 배열의 합

// 9. spiral로 출력

#include <stdio.h>

int main(void)
{
    int i,j;
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int p[3][3] = {0}; // {1,3,}

    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            p[i][j] = a[i][j];
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf ("%d", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}







//(Nineth question(not done))
// int main(void)
// {
//     int i,j;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int new_arr[3][3] = {0};

//     for (i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             new_arr[i][j] = arr[i][j];
//         }
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf ("%d", new_arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;

// }





//(Eigth question)
// int main(void)
// {
//     int i,j;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int new_arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             arr[i][j] += new_arr[i][j];
//         }
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;

// }







//(Seventh question)
// int main(void)
// {
//     int i,j, multiply;
//     int arr[3][3]={0};

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     printf("Get your multiplication value to apply on matrix: ");
//     scanf("%d", &multiply);

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             arr[i][j] *= multiply;
//         }
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;

// }






//(Sixth question)
// int main(void)
// {
//     int i,j;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {

//         }
//     }

//     return 0;
// }


//(Fifth question)
// int main(void)
// {
//     int i,j;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//     int new_arr[3][3] = {0};

//     for (i=0; i<3; i++)
//     {
//         for (j=0; j<3; j++)
//         {
//             new_arr[2-i][2-j] = arr[i][j];
//         }
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d", new_arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//(Fourth question)
// int main(void)
// {
//     int i,j, sum = 0;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     for (i=0; i<3; i++)
//     {
//         sum += arr[i][2];
//     }

//     printf ("The sum of the largest value of coloumn is %d", sum);

//     return 0;
// }

//(Third question)
// int main(void)
// {
//     int i,j, sum = 0;
//     int arr[3][3] = {1,2,3,4,5,6,7,8,9};

//     for (i=0; i<3; i++)
//     {
//         sum += arr[2][i];
//     }

//     printf ("The sum of the largest value of row is %d", sum);

//     return 0;
// }





//(Second question)
// int main(void)
// {
//     int i, j, k = 9;
//     int arr[3][3] = {0};

//     for (i=0; i<3; i++)
//     {
//         for (j=0; j<3; j++)
//         {
//             arr[i][j] = k; // stores value 0 into [i][j]
//             k--;// then reduce the value by 1 (9-1) so it can store the next value into the next index
//         }
//     }

//     for(i=0; i<3; i++)
//     {
//         for(j=0; j<3; j++)
//         {
//             printf("%d", arr[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;

// }



// (First question)
// int main(void)
// {
//     int i,j, sum = 0;
//     int arr[3][3]= {1,2,3,4,5,6,7,8,9}; 
//     int left_arr = 0;
//     int right_arr = 0;

//     for(i=0; i<3; i++)
//     {
//         left_arr += arr[i][i]; // all the arr are the same and increases by 1 each time, (0,0) -> (1,1) -> (2,2)
//         right_arr += arr[i][3-1-i]; // since its the same pattern as rotation how j unit reduces from 2 to 0
//     }

//     sum = left_arr + right_arr;

//     printf("the sum of the diagonals are %d and %d\n", left_arr, right_arr);
//     printf("The total sum of the two diagonals are %d", sum);

//     return 0;

// }
