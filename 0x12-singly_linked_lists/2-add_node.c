#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node_nueve;
	unsigned int i = 0;

	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(list_t));
	if (node_nueve == NULL)
		return (NULL);

	node_nueve->str = strdup(str);
	node_nueve->len = len;
	node_nueve->next = (*head);
	(*head) = new;

	return (*head);
}
