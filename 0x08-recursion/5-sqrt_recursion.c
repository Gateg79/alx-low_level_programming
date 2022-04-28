#include "main.h"

/**
 * sqrtof - evaluate square root
 * @a: select sqare root
 * @b: integer to find square root of
 *
 * Return: square root of b or -1
 */
int sqrtof(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (sqrtof(a + 1, b));
}


/**
 * _sqrt_recursion - retuns natural square root of a number
 * @n: integer to find square root of
 *
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrtof(1, n));
}
