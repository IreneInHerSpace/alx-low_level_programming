#include "main.h"
/**
* *_strcat - function commute srtings
* @dest: string to append to
* @src: string to add
* Return: return value of dest
*/
char *_strcat(char *dest, char *src)
{
int i = 0;
int j;
while (dest[i])
{
i++;
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
return (dest);
}
