/* This is the basic introduction of the operators (Prefix/postfix)
* Prefix is where you add or minus 1 the variable's value before the code runs
* Postfix is where you add or minus 1 the variable's value after the code runs
*/

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