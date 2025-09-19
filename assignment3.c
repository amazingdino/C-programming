#include <stdio.h>

int main(void)
{
    int i, j, k, max;

    if(i>j){
        if(i>k){
            max = i;
        } else {
            max = k;
        }
    } else{
        if(j>k){
            max = j;
        } else {
            max = k;
        }
    }

    return 0;
}