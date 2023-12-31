#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;

	if (!h)
		return (i);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
