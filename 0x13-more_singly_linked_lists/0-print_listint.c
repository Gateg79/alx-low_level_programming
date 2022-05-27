#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list to print
 * Return: number of elements in the list
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tp;
	unsigned int s = 0;

	tp = h;
	while (tp)
	{
		printf("%d\n", tp->n);
		s++;
		tp = tp->next;
	}
	return (s);
}
