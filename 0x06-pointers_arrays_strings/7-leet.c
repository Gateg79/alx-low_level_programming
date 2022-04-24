#include "main.h"
/**
 * leet - encodes string into 1337
 * @h: string to encode
 * Return: h
 */
char *leet(char *h)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(h + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(h + i))
				*(h + i) = b[j];
		}
	}
	return (h);
}
