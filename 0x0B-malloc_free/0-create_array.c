#include <stdlib.h>
#include "main.h"
/**
 *create_array - creates and array of chars
 *@size: size of array
 *@c: character to be printed
 *Return: char
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;
if (size == 0)
return (NULL);
ptr = (char *) malloc(sizeof(char) * size);
if (ptr == NULL)
return (0);
while (i < size)
{
*(ptr + i) = c;
i++;
}
*(ptr + i) = '\0';
return (ptr);
}
