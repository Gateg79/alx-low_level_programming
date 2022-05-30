#include "main.h"

/**
 * flip_bits - number of bits to flip between two numbers
 * @n: first number
 * @m: second number
 *
 * Return:number of bit you would need to flip
 * to get from one number to another
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, t;
	unsigned int c, i;

	c = 0;
	t = 1;
	d = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (t == (d & t))
			c++;
		t <<= 1;
	}
	return (c);
}
