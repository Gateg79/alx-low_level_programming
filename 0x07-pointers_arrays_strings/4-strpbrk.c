#include "main.h"
/**
 * _strpbrk - searches string for any set of bytes
 * @s: string to check occurrence
 * @accept: string to check against
 *
 * Return: pointer to byte ins that matches or NULL if no match
 */
char *_strbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return(0);
}
