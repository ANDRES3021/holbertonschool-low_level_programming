#include <string.h>
#include <stdlib.h>
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
	list_t *newnood;
	unsigned int i;

	for (i = 0; str[i]; i++)
	continue;
	newnood = malloc(sizeof(list_t));
	if (newnood == NULL)
	{
		return (NULL);
	}

	newnood->str = strdup(str);
	newnood->len = i;
	newnood->next = (*head);
	(*head) = newnood;

	return (*head);
}
