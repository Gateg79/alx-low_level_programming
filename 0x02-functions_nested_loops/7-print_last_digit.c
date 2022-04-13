#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number to check
 * Return: 0 or 1
 */

int print_last_digit(int n)
{
	int v;
	
	if (n < 0)
		v = -1 * (n % 10);
	else
		v = n % 10;

	_putchar(v + '0');
		return (v);
}
