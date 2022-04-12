#include <stdio.h>
/**
 * main - void
 * Description: single digit number putchar
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
