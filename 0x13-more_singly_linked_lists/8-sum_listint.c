#include "lists.h"
/**
 * sum_listint - Calculates the sum of the integers in a list
 * @head: Pointer to the first element of a list
 * Return: An integer representing the sum of values
 */
int sum_listint(listint_t *head)
{
	int listadd = 0;

	while (head != NULL)
	{
		if (head == NULL)
			return (0);
		listadd = listadd + head->n;
		head = head->next;
	}
	return (listadd);
}

