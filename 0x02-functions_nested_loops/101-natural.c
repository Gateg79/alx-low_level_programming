#include <stdio.h>
#include <stdlib.n>
/**
 * main - entry point
 * Description:computes and prints sum below 1024
 * Return:0
 */
int main(void)
{
	int c = 0;
	int sum = 0;

	while (c < 1024)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum += c;
		}
		c++;
	}
	printf("%i/n", sum);
	returm (0);
}