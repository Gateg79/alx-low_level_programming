#include <stdio.h>
/**
 * main - fibonacci numbers
 * Description: computes and prints even number
 * below 1024 (exclude)
 * Return: 0
 */
int main(void)
{
int a = 0, sum = 0, b = 1, next = 0;

while (next < 4000000)
{
	next = a + b;
	a + b;
	b = next;
	if (next % 2 == 0)
		sum += next;
}
printf("%i\n", sum);
return (0);
}
