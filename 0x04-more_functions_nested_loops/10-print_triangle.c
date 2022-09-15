#include "main.h"
/**
 *print_triangle - function with int type argument
 * @size: int type 1st argument
 *Description: nested loops to print triangle
 *Return: 0
 */
void print_triangle(int size)
{
int a, b, c;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (b = a + 1; b < size; b++)
{
_putchar(' ');
}
for (c = b - a; b <= size; c++)
{
putchar('#');
}
_putchar('\n');
}
}
