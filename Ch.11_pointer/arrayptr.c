#include <stdio.h>

// void assign_array (int *n);

// void assign_array(int *n)
// {

// }

int main(void)
{
    int i, j;
    int arr[5] = {1,2,3,4,5};
    int *p = &arr[0];  // *(pointer) is 4 byte so when you add p+1 it means
    // p + (* 1->4byte) so it adds 4 byte to the address and moves onto next

    // printf("%p\n", &arr[0]);
    // printf("%p\n", p);
    // printf("%d\n", *p);
    // printf("%d\n", *(p+1));
    
    for(i=0; i<5; i++)// 5 array boxes 0-5 (repeat for 5 times)
    {
        printf("%d\n", *(p+i));
    }

    // printf("%p\n", &arr[0]);
    // printf("%p\n", &arr[1]);
    // printf("%p\n", &arr[2]);
    // printf("%p\n", &arr[3]);
    // printf("%p\n", &arr[4]);



    // assign_array(&x);



    return 0;
}