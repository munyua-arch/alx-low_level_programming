#include "variadic_functions.h"

/**
 * print_all - prints all
 * @format: param
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int a = 0, b, d = 0;
	char *str;
	const char k_arg[] = "cifs";

	va_start(args, format);
	while (format && format[a])
	{
		b = 0;
		while (k_arg[b])
		{
			if (format[a] == t_arg[b] && d)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
			case 'c':
				printf("%c", va_arg(args, int)), d = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), d = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), d = 1;
				break;
			case 's':
				str = va_arg(args, char *), d = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		} a++;
	}
	printf("\n"), va_end(args);
}
