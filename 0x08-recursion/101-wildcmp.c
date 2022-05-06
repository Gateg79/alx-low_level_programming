#include "main.h"

/**
 * test - tests if wildcard is a proper match
 * @l7: string to compare
 * @l8: wildcard match to compare
 * @f7: first spot that was checked
 * @f8: first spot in wildcard comparison
 *
 * Return: spot that matches or NULL
 */
char *test(char *l7, char *l8, char *f7, char *f8)
{
	if (*l8 == '*' || (*l7 == '\0' && *l8 == '\0'))
		return (f7);
	else if (*l7 != *l8)
		return (wildcard(l7, f8));
	else
		return (test(l7 + 1, l8 + 1, f7, f8));
}
/**
 * wildcard - checks for the wildcards
 * @l4: string to compare to
 * @l5: string to check
 *
 * Return: pointer to spot in l4 that matches l5
 */
char *wildcard(char *l4, char *l5)
{
	if (*l4 != *l5)
	{
		if (*l4 == '\0')
			return (0);
		return (wildcard(l4 + 1, l5));
	}
	return (test(l4 + 1, l5 + 1, l4, l5));
}

/**
 * wildcmp - compares 2 strings, returns 1 if identical otherwise 0
 * @s1: first string
 * @s2: second string, may contain wildcard *
 *
 * Return: 1 if match, 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	char *p;

	if (*s2 == '*' && *(s2 + 1) == '\0')
		return (1);
	else if (*s2 == '*' && *(s2 + 1) == '*')
		return (wildcmp(s1, s2 + 1));
	else if (*s2 == '*')
	{
		p = wildcard(s1, s2 + 1);
		if (p == 0)
			return (0);
		return (wildcmp(p + 1, s2 + 2));
	}
	else if (*s1 != *s2)
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	return (wildcmp(s1 + 1, s2 + 1));
}
