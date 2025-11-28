#include <stdio.h>

int count_space (const char s[]);

// int count_space (const char s[])
// {
//     int i, num = 0;

//     for (i=0; s[i] != '\0'; i++) // until character goes to null number
//     {
//         if(s[i] == ' ') // when there is a space
//         {
//             num++; // increase number
//         }
//     }
//     return num;
// }
int count_space (const char *s)
{
    int i, num = 0;

    for(i=0; *(s+i) != '\0'; i++) //s+0 is first character, then second when i++
    {
        if(*(s+i) == ' ') //so when s+i has space bar
        {
            num++; // increase number
        }
    }
    return num;
}



int main(void)
{
    const char *str = "Hi my name is J";
    int number_of_space;

    number_of_space = count_space(str);

    printf("The number of spaces in this sentence is :%d\n", number_of_space);

    return 0;

}