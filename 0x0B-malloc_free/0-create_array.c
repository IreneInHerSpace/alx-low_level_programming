#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates and array of chars
 *@size: size of array
 *@c: character to be printed
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
char *pointer;
unsigned int i;
pointer = malloc(size);
if (size == 0 || pointer == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
pointer[i] = c;
}
if (!pointer)
return (NULL);
else
return (ptr);
}
