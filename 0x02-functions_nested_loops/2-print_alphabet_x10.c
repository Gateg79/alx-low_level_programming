#include "main.h"

/*
 * print_alphabet_x10(void) - prints alphabet x 10
 * @c: character to use
 * Return: void
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
