#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main void
 * Description: print
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
