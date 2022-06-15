#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: integer type
 * Return: void
 */
void print_triangle(int size)
{
	int g, h;

	if (size <= 0)
		_putchar('\n');
	for (g = 1; g <= size; g++)
	{
		for (h = 1; h <= size; h++)
		{
			if (h <= (size - g))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
