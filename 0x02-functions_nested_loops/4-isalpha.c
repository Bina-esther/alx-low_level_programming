/**
* Name - isalpha
* purpose - checks for alphabetic character
*/
#include "main.h"
/**
* Definition
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'B'))
{
return (1);
}
else
{
return (0);
}
}
