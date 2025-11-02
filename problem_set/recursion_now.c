#include <stdio.h>

void reverse (char str[], int i)
{
    if(str[i] == '\0')
        return;
    reverse(str, i+1);
    printf("%c", str[i]);
}

int main(void)
{
    char str[100];
    int i = 0;


    printf("Get your character: ");
    scanf("%s", str);

    printf("Reverse print order is: ");
    reverse (str, i);

    return 0;

}