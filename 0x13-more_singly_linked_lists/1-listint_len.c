#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t count = 0;

	if (h == NULL)
		return (0);
	current = h;
	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
