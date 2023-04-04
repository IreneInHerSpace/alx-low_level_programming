#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}
This function uses recursion to calculate the length of the string. It checks if the first character of the string is the null character, which indicates the end of the string. If it is, the function returns 0. If not, it adds 1 to the result of calling itself with the address of the next character in the string, and returns that value. The function continues to call itself with the address of the next character in the string until it reaches the end of the string, at which point it returns the total length.





