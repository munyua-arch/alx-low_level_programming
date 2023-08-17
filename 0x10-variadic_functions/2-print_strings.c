#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: pointer param
 * @n: param
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int a;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(args);
}
