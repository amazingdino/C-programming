#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, i;

    int *room = (int*)malloc(sizeof(int) * n);

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(room == NULL)
    {
        printf("Failed.\n");
    }

    for(i=0; i<n; i++)
    {
        room[i] = i+1;
        printf("Number of rooms for students:%d\n", room[i]);
    }
    
    free(room);
    
    return 0;

}