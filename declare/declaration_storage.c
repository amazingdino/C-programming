#include <stdio.h>

    int a; // external(but not so sure if I have to make it a function to make it external)
    extern int b; // external linkage
    static int c; // internal linkage

    void f(int d, register int e)
{
    auto int g; // only in local variable (local variable's default storage)
    int h;
    static int i;
    extern int j; // not so sure how this is not external but none
    register int k;
}

int main(void)
{

    return 0;
}