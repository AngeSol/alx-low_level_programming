#include "main.h"
/**
 * times_table - function
 * rm = row, col = column, d = digits
 * Return: Always success
 */
void times_table(void)
{
	int rw, col, d;

	for (rw = 0; rw <= 10; rw++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (col = 1; col <= 10; col++)
		{
			d = (rw * col);

			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}

			else
			{
				_putchar(' ');
			}
			_putchar(' ');
		}
	}
}
