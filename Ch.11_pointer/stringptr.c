#include <stdio.h>

int main(void)
{

    int i;
    char *j;

    char str[] = "abcde"; // print in reverse order by using pointer
    char *p = str; // exception for string (&)
    char *q = str + 4;
    
    *p = 'e';
    *q = 'a';
    

    for(i=0; i<5; i++)
    {
        printf("%c", str[i]);
    }

    // char *p = str + 4; // e;
    // a 와 e 위치를 바꿔서 0 5 -> 5 0, str 전체 출력


    // for(i=0; i<5; i++)
    // {
    //     printf("%c\n", *p);
    //     p--;
    // }

    return 0;
}