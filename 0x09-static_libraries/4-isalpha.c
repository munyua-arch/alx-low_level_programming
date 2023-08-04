#include "main.h"

/**
 * _isalpha - show 1 if input is c otherwse 0
 * @c: the character to be checked
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
