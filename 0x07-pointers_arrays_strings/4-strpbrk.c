#include "main.h"
/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to check occurrence
 * @accept: string to check against
 *
 * Return: pointer to byte ins that matches or NULL if no match
 */
char *_strbrk(char *s, char *accept)
{int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
