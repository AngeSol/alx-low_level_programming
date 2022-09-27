#include "main.h"

/**
 * _strspn - prints the consecutive caracters
 * @s: source string
 * @accept: searching string
 *
 * Return: new string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
