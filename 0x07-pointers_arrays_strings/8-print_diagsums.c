#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix
 *of integers
 *@a: values of the array
 *@size: size of square
 *Return: nothing 
 */
void print_diagsums(int *a, int size)
{
int i = 0, number = 0, sum, sum2;
sum = sum2 = 0;
while (i < (size * size))
{
number = = *(a + i);
sum = sum + number;
i = i + size + 1;
}
i = size - 1;
while (i < ((size * size) - 1))
{
number = = *(a + i);
sum2 = sum2 + number;
i = i + (size - 1);
}
printf("%d, %d\n", sum, sum2);
}
