#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to set
 * @index: index at which to set bit
 *
 * Return: 1 if it works, or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int be;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	be = 1 << index;
	*n = *n | be;
	return (1);
}
