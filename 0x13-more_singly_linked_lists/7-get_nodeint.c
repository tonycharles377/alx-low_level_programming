#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to first node
 * @index: node to be returned
 * Return: nth node of a listint_t linked list else NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
