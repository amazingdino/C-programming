#include <stdio.h>

struct Human
{
    int age;
    char gender;
};

int main(void)
{
    struct Human Andy = {23, 'm'};

    printf("%d %c\n", Andy.age, Andy.gender);

    struct Human *p = &Andy;

    p->age = 10;
    (*p).gender = 'f';

    printf("%d %c\n", (*p).age, p->gender);

    return 0;
}