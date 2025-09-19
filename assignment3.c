// this is to indicate among three variables, which value has the maximum value.
// when i is greater than j, max is either i or k (other way is either j or k)
// when j is greater than k, max is either j or k
// by adding scanf and printf, you could operate the codes by inputting the i,j,k value in.
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