#include "main.h"
/**
 * checks for uppercase character
 *  _isupper - function with 1 int type argument
 *  Returns 1 if c is uppercase
 *  Returns 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

