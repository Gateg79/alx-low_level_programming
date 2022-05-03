#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to check occurrence
 * @accept: string to check against
 *
 * Return: pointer to byte ins that matches or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
