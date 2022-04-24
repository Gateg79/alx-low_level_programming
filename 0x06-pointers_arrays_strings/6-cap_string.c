#include "main.h"
/**
 * cap_string - capitalize all words of a string
 * @c: string to capitalize
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0, j;
	char s[] = " \t\n,;.!?\"(){}";

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
		{
			if (i == 0)
				*(c + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (s[j] == *(c + i - 1))
						*(c + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (c);
}
