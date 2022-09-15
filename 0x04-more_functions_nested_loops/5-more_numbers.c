#include "main.h"
/**
 * more_numbers - function with no arguments
 * Description: nested while loops to print from 0 to 14
 * Return: 0
 */
void more_numbers(void)
{
int a, b;
a = 0;
while (a <= 9)
{
b = 0;
while (b <= 14)
{
if (b > 9)
{
_putchar(b / 10 + '0');
}
_putchar(b % 10 + '0');
b++;
}
a++;
_putchar('\n');
}
}
