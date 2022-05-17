#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings passed to function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list vl;

	va_start(vl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(vl, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vl);
}
