#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position.
  * @head: double pointer.
  * @idx: puntero de lista vinculada.
  * @n: integer to be inserted.
  * Return: address of the new node or NULL if it fails.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temporal_node; 
    listint_t *temp;
	unsigned int iter;

	temp = *head;

	for (iter = 0; temp && iter < idx - 1; iter++)
	{
		temp = temp->next;
	}

	temporal_node = malloc(sizeof(listint_t));
	if (temporal_node != NULL)
	{
		temporal_node->n = n;
		if (idx == 0)
		{
			temporal_node->next = *head;
			*head = temporal_node;
			return (temporal_node);
		}
		if (iter + 1 == idx)
		{
			temporal_node->next = temp->next;
			temp->next = temporal_node;
			return (temporal_node);
		}
	}
	free(temporal_node);
	return (NULL);
}
