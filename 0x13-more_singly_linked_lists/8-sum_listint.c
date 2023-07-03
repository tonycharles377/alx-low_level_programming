#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint -  returns the sum of all the (n) of a listint_t linked list
 * @head: pointer to first node
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		count = count + current->n;
		current = current->next;
	}
	return (count);
}
