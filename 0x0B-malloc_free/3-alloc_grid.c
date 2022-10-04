#include <stdlib.h>
#include "main.h"
/**
 *alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 *Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
int **matrix;
int i, j;
if (height <= 0 || width <= 0)
{
return (NULL);
}
matrix = (int **) malloc(sizeof(int *) * height);
if (matrix == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
matrix[i] = (int *) malloc(sizeof(int) * width);
if (matrix[i] == NULL)
{
free(matrix);
for (j = 0; j <= i; j++)
{
free(matrix[j]);
}
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
