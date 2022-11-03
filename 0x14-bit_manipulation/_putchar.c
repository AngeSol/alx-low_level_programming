#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 * 
 * Return: On sucess
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
