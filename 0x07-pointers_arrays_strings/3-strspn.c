#include "main.h"

/**
 * _strspn - prints the consecutive caracters
 * @s: source string
 * @accept: searching string
 *
 *
 * Return: new string
 */
unsigned int_strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			
			b++;
		}

		a++;
	}
	return (t);
}
