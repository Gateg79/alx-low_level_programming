#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char, initializes with specific char
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: Null if size = 0, pointer to array or null if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *u;

	if (size == 0)
		return (NULL);
	u = malloc(size * sizeof(char));
	if (u == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		u[i] = c;
	}
	return (u);
}
