#µinclude <unistd.h>

/**
 * _putchar - writes the character
 * @c: The caracter to print
 *
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
