#include <unistd.h>
/**
 * _putchar - putchar statement
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

