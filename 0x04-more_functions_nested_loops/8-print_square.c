#include "main.h"

/**
 * print_square - print squares n times
 * @n: number of times to be printed
 * Return: void
 */
void print_square(int n)
{
	int i = 0, g;

	while (i < n && n > 0)
	{
		g = 0;

		while (g < n)
		{
			_putchar('#');
			g++;
		}


		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
