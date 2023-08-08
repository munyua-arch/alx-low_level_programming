#include "main.h"
#include <stdlib.h>

/**
 * argstostr - prints args
 * @ac: takes in width of grid
 * @av: height of grid
 * Return: the args one line at a time
 */
char *argstostr(int ac, char **av)
{
	int a, b, c, d;
	char *p;

	c = 0;
	d = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			d++;
	}
	d += ac;

	p = malloc(sizeof(char) * d + 1);

	if (p == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			p[c] = av[a][b];
			c++;
		}
	}
	return (p);
}
