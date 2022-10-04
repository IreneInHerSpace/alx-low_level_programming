#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *Return: NULL in case of error, pointer to allocated
 *space
 */
char *_strdup(char *str)
{
char *cpy;
unsigned int i = 0, len = 0;
if (str == NULL)
return (NULL);
while (str[len])
{
len++;
}
cpy = malloc(sizeof(char) * (len + 1));
if (cpy == NULL)
{
return (NULL);
}
while ((cpy[i] = str[i]) != '\0')
{
i++;
}
return (cpy);
}
