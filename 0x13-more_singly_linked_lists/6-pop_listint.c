#include "lists.h"

/**
 *pop_listint - Deletes the first element of a list
 *@head: Pointer to the head of the list
 *Return: The value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int n;

	tempo = *head;
	if (tempo == NULL)
		return (0);
	*head = tempo->next;
	n = tempo->n;
	free(tempo);
	return (n);
}
