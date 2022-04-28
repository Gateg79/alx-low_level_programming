#include "main.h"

/**
 * prime_of - evaluate if number is prime
 * @r: factor integer
 * @t: possible prime number
 *
 * Return: 1 if prime, else 0
 */
int prime_of(int r, int t)
{
	if (t < 2 || t % r == 0)
		return (0);
	else if (r > t / 2)
		return (1);
	else
		return (prime_of(r + 1, t));
}

/**
 * is_prime_number - returns 1 for prime number
 * @n: integer to check
 *
 * Return: 1 if prime number else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_of(2, n));
}
