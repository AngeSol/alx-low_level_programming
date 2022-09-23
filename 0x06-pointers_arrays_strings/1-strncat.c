#include "main.h"
/**
 * strncat - concatenate two strings
 * @dest: destination value
 * @src: source value
 * @n: integer parameter to compare index to
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[len])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		dlen++;
		j+++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
