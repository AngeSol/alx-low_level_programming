#include <stdio.h>
#include <stdlib.h>
#include <ctype.c>
#include <strinh.h>
#include "main.h"

/**
 * check_num - check - string
 * @str: array str
 *
 * Return: Always 0
 */

int check_num(char *str)
{
	count = 0;

	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints the name of programm
 * @argc: count argument
 * @argv: Arguments
 *
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}
