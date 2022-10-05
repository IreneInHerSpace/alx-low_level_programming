#include <stdlib.h>
#include "main.h"
/**
 *argstostr - concatenates all the arguments of the program
 *@ac: number of arguments
 *@av: array of arguments
 *Return: Pointer to the new string (Success), NULL (Error)
 */
char *argstostr(int ac, char **av)
{
char *cat, *chr;
int arg, size;
if (!ac || !av)
return (NULL);
for (arg = 0, size = 1; arg < ac; ++arg, ++size)
{
for (chr = av[arg]; *chr; ++chr, ++size)
;
}
cat = (char *) malloc(sizeof(char) * size);
if (!cat)
return (NULL);
for (arg = 0, size = 0; arg < ac; ++arg, ++size)
{
for (chr = av[arg]; *chr; ++chr, ++size)
cat[size] = *chr;
cat[size] = '\n';
}
cat[size] = '\0';
return (cat);
}
