#include "main.h"

/**
 * print_last_digit -> prints the last digit
 * @n: the passed args
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
