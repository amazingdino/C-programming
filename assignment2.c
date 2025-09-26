/*
* This is more detailed code comparing with 16th.c.
* When there are three values you want to compare, and which one has the biggest number
* We input that value into max so it would output the variable with the biggest number and state is max.
*/

#include <stdio.h>

int main(void)
{
    int i, j, k, max;

    scanf("%d %d %d", &i, &j, &k);
    if (i > j)
    {
        if (i > k){
            max = i;
        }
        else{
            max = k;
        }
    }
    else 
    {
        if (j > k){
            max = j;
        } 
        else{
            max = k;
        }
    }

    printf("Max %d", max);

    return 0;
}