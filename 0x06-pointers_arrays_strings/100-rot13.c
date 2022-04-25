#include "main.h"
/**
 * *rot13 - encode string using rot13
 * @b: int array pointer
 * Return: b
 */
char *rot13(char *b)
{
int j, k;
char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (j = 0; b[j] != '\0'; j++)
{
	for (k = 0; k < 54; k++)
	{
		if (((b[j] <= 'z' && b[j] >= 'a') || (b[j] <= 'Z' && b[j] >= 'A'))
		&& b[j] == x[k])
		{
			b[j] = y[k];
			break;
		}
	}
}
return (b);
}
