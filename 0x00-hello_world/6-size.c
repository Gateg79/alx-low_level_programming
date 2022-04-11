#include <stdio.h>
/**
 * main - sizes or data types are summarized
 * Return: 0
 */
int main(void)
{

	char c;
	int i;
	long int a;
	long long int v;
	float f;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long) sizeof(a));
	printf("Size of a long long int: %lu.\n", (unsigned long) sizeof(v));
	printf("Size of a float: %lu.\n", (unsigned long) sizeof(f));

	return(0);
}

