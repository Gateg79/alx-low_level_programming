#include "main.h"
/**
 * string_toupper - lowercase to uppercase letters change
 * @t: pointer
 * Return: capitalized string
 */
char *string_toupper(char *t)
{
	int i = 0;

	while (*(t + i))
	{
		if (*(t + i) >= 'a' && *(t + i) <= 'z')
			*(t + i) -= 'a' - 'A';
		i++;
	}
	return (t);
}
