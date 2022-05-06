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
	for (i = 0; str[i]; i++)
		;
	i++;
	s = malloc(i * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
