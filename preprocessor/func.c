#include <stdio.h>

#define FUNCTION_CALLED() printf("%s called\n", __func__);
#define FUNCTION_RETURNS() printf("%s returns\n", __func__);

void f(void);

int main(void)
{
    // static const char __func__[] = "main";
    f();

    return 0;
}

void f(void)
{
    FUNCTION_CALLED();
    printf("---------------\n");
    FUNCTION_RETURNS();
}