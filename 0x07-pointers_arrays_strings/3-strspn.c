#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string to check
 * @accept: s bytes limit
 * Return: number of bytes of s in accept
 */
char *_strchr(char *s, char c)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
