#include "main.h"
/**
 *print_triangle - function with int type argument
 * @size: int type 1st argument
 *Description: nested loops to print triangle
 *Return: 0
 */
void print_triangle(int size)
{
int a, b, c, d;
d = size - 1;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (b = 0; b < d; b++)
{
_putchar(' ');
}
d--;
for (c = 0; c < (a + 1); c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else if (size <= 0)
{
_putchar('\n');
}
}
