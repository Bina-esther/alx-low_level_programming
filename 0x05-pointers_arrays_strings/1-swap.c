#include "main.h"
/** 
* Swaps two integers
* a to b
* Return void
*/
void swap_int(int *a, int *b)
{
/* declare a third variable to swap */
int x;

/* swap */

x = *a;
*a = *b;
*b = x;
}
