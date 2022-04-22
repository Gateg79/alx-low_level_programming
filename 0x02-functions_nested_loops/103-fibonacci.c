#include <stdio.h>
/**
 * main - fibonacci numbers
 * Return: 0
 */
int main(void)
{
int a = 0, sum = 0, b = 1, next = 0;

while (next < 4000000)
{
	next = a + b;
	b = next;
	if (next % 2 == 0)
		sum += next;
	else; continue;
}
printf("%i\n", sum);
return (0);
}
