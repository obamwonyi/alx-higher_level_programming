#include "list.h"

/**
 * is_palindrome - recursive palind or not
 * @head: head list
 * Return: 0 if it is not a palindrome
 */
int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);
	return (aux_palind(head, *head));
}

/**
 * aux_palind - funct to know if is palindrome
 * @head: head list
 * @end: end list
 * Return: 0 or 1
 */
int aux_palind(listint_t **head, listint_t *end)
{
	if (end == NULL)
		return (1);

	if (aux_palind(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head)->next;
		return (1);
	}
	return (0);
}
