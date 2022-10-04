#include <stdlib.h>
#include "main.h"
/**
 *free_grid - Entry point
 *@grid: rows of matrix
 *@height: columns of string
 *
 *Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL || height == 0)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
