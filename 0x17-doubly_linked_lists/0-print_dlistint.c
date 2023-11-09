#include "lists.h"

/**
 * print_dlistint - print out doubly linked list
 * @h: address of the head node
 * Return: size of the doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
