#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * pl - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int pl(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + l))
	{
		return (pl(s + 1, l - ));
	}
	return (0);
}

/**
 * is_palindrome -> palindrome
 * @s: pointer
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pl(s, len - 1));
}
