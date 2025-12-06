#include <stdio.h>

#ifdef DEBUG // when #define DEBUG is written, it writes or does whatever is inside this #ifdef - #endif
#endif

#ifndef DEBUG // other way around if DEBUG is not written.
#endif

#ifndef BUFFER SIZE
#define BUFFER SIZE 256
#endif

#if a == 1
#elif a == 2 // else if 
#endif

#ifdef date // i wrote ifndef, the problem or terminal will tell you there is an error
#error date must be defined! // tells you if there is something wrong by adding a message to it
#endif

#line // rarely used, its to change (but i read it still don't get how to use it)

#pragma data(heap_size => 1000, stack_size => 2000)
_Pragma ("data (heap_size => 1000, stack_size => 2000)")

#define DO_PRAGMA(x) _Pragma(#x)
DO_PRAGMA(GCC dependency "parse.y")
// #pragma GCC dependency "parse.y"


int main(void)
{

    return 0;

}