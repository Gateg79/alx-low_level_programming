#include "main.h"

/**
 * void print_line - print line n times
 *
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n')
}
