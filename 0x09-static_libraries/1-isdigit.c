#include "main.h"

/**
 * _isdigit - function with int type input
 * @c: int type input of a single digit
 * Description:fuction checks for a digit (0 through 9)
 * Return: 1 if c is digit and 0 other
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
