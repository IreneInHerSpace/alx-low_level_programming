#include "main.h"
#include <stdio.h>
/**
 *main - Prints the name of the program
 *@argc: Number of command line arguments
 *@argv: Array name
 *Return: 0 always (sucess)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
