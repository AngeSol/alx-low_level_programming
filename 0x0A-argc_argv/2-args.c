#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program
 * @argc: Count argument
 * @argv: Arguments
 *
 * Return: Always 
 */

int main(int argc, car *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
