#include "main.h"
/**
 * _strstr - locates a substring
 *@haystack: string
 *@needle: string
 *Return: a pointer to the beginning of a substring
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
while (haystack[i] != '\0')
{
i = 0;
while (needle[j] != '\0')
{
j = 0;
if (needle[j] != haystack[i + j])
{
break;
}
j++;
}
if (needle[j] == '\0')
{
return (&haystack[i]);
}
i++;
}
return ('\0');
}
