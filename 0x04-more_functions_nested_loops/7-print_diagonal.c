#include "main.h"
/**
 * print_diagonal - function with one integer argument
 * @n: 1st int type argument
 * Description: draw a diagonal line on terminal with loops
 * Return: na
 */
void print_diagonal(int n)
{
int i, j;
i = 0;
while (n > 0)
{
j = i;
while (j > 0)
{
_putchar(' ');
j--;
}
_putchar('\\');
_putchar('\n');
i++;
n--;
}
if (i < 1)
_putchar('\n');
}
