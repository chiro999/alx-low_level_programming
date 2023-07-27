#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_nueve;
	list_t *tmp = *head;
	unsigned int i = 0;

	while (str[i] != '\0')
		len++;

	node_nueve = malloc(sizeof(list_t));
	if (node_nueve == NULL)
		return (NULL);

	node_nueve->str = strdup(str);
	node_nueve->len = i;
	node_nueve->next = NULL;

	if (*head == NULL)
	{
		*head = node_nueve;
		return (node_nueve);
	}
	
	/*while loop to get us to the end of the linked list */
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = node_nueve;

	return (node_nueve);
}
