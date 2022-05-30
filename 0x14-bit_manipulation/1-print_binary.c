#include "main.h"

/**
 * _pow - calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= power; i++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int v, t;
	char k;

	k = 0;
	v = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (v != 0)
	{
		t = n & v;
		if (t == v)
		{
			k = 1;
			_putchar('1');
		}
		else if (k == 1 || v == 1)
		{
			_putchar('0');
		}
		v >>= 1;
	}
}
