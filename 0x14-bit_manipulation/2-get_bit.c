#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to check bits
 * @index: index, starting from 0 of the bit you want
 *
 * Return: value of the index bit or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int v, t;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	v = 1 << index;
	t = n & v;
	if (t == v)
		return (1);
	return (0);
}
