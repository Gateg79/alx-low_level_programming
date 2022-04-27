#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: strint to locate character c
 * @c: character to locate in string s
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
