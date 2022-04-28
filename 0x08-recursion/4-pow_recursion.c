#include "main.h"

/**
 * _pow_recursion - returns x raised to power of y
 * @x: base integer
 * @y: exponential integer
 *
 * Return: -1 if y is lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x *  _pow_recursion(x, y - 1));
}
