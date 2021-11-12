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
	list_t *newnood;
	list_t *tempo = *head;
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
	newnood->next = NULL;

	if (*head == NULL)
	{
		*head = newnood;
		return (newnood);
	}
	while (tempo->next)
	{
		tempo = tempo->next;
	}
	tempo->next = newnood;

	return (newnood);
}
