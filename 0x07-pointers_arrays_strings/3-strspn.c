#include "main.h"

/**
 * _strspn - Locates a character in a string
 * @s: This is the main C string to be scanned.
 * @accept: This is the string containing the list of characters to match in s
 * Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; aceept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[a + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
