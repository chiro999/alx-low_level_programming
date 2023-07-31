#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: integer to insert in the linked list
 *
 * Return: address of the new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	/* sets the address part of the new node to NULL(since it is to be set as the last node) */
	new_node->next = NULL;

	/* if this new node is the first and only element in the linked list(ie. the list is empty) */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	
	/* while loop to get us to the end of the linked list */
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
