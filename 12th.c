#include <stdio.h>

int main(void) 
{
   int a =1;
   
   printf("%d\n", a); /* a = 1 */
   printf("%d\n", ++a); /* a = 2*/
   printf("%d\n", a); /* a = 2 */
   printf("%d\n", a++); /* a = 2 */
   printf("%d\n", a);
   return 0;

}