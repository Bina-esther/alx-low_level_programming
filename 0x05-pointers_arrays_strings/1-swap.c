#include "main.h"
/**
* swap_int - Swaps two integers
* @a - Integer to swap
* @b - Integer to swap
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
