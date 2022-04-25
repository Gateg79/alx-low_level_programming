#include  "main.h"
/**
 * print_number - prints an integer
 * @n: integer to use
 * Return: void
 */
void print_number(int n)
{
int divisor = 1, i, resp;

if (n < 0)
{
	_putchar	('-');
	n *= -1;
}

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (9; divisor >= 1; n %= divisor, divisor /= 10)
{
	resp = n / divisor;
	_putchar('0' + resp);
}
}