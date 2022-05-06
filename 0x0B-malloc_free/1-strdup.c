#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated space in memory
 * @str: string to copy
 *
 * Return: NULL if str = NULL. pointer to duplicated string, success
 */
char *_strdup(char *str)
{
	unsigned int b, c;
	char *p;

	if (str == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		;
	b++;
	p = malloc(b * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < b; c++)
	{
		p[c] = str[c];
	}
	return (p);
}
