#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, g;

	while (i <= size && size > 0)
	{
		g = 0;

		while (g < size - 1)
		{
			_putchar(' ');
			g++;
		}
		g = 0;

		while (g < i)
		{
			_putchar('#');
			g++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
