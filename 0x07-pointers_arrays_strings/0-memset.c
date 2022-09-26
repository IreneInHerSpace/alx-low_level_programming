#include "main.h"
/**
 *_memset - function fills memory with a constant byte
 *
 *@s: space to fill bytes
 *@b: bytes to write
 *@n: number of bytes to write
 *
 *Return: destination address s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
