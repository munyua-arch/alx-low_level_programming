#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the C string to be scanned.
 * @accept:character in str1 that matches one of the characters in str2
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
