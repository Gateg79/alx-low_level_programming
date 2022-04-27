#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: strint to locate character c
 * @c: character to locate in string s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
