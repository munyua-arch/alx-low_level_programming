#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by
*new line
*@separator: string to be printed between numbers
*@n: number of integer to be passed
*
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{

		printf("%d", va_arg(args, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);

}
