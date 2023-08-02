#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
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
 * pal - palindrome
 * @s: pointer to string
 * @a: position
 * Return: boolena
 */

int pal(char *s, int a)
{
	if (a < 1)
	{
		return (1);
	}
	if (*s == *(s + a))
	{
		return (pal(s + 1, a - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (pal(s, length - 1));
}
