"include <stdio.h>
#include "main.h"

/**
 * main - print the name of arguments
 * @argc: COunt arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);

	return (0);
}
