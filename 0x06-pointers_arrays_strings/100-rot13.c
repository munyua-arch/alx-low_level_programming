#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */

char *rot13(char *s)
{
	int k, l;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (l = 0; a[l] != '\0'; l++)
		{
			if (s[k] == a[l])
			{
				s[k] = b[l];
				break;
			}
		}
	}
	return (s);
}
