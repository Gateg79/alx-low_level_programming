#include "main.h"

/**
 * _strlen - gives length of string
 * @sl: string to check
 *
 * Return: length of string
 */
int _strlen(char *sl)
{
	if (*sl == '\0')
		return (0);
	else
		return (1 + _strlen(sl + 1));
}

/**
 * check_palindrome - checks to see if a string is a palindrome
 * @f: left hand index
 * @g: right hand index
 * @b: possible palindrome
 *
 * Return: 1 for palindrome, 0 not palindrome
 */
int check_palindrome(int f, int g, char *b)
{
	if (f >= g)
		return (1);
	else  if (b[f] != b[g])
		return (0);
	else
		return (check_palindrome(f + 1, g - 1, b));
}

/**
 * is_palindrome - declares string as palindrome or not
 * @s: charater to check
 *
 * Return: 1 for palindrome, 0 not palindrome
 */
int is_palindrome(char *s)
{
	int j;

	j = _strlen(s) - 1;
	return (check_palindrome(0, j, s));
}
