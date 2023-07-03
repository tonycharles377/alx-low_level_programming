#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	if (h == NULL)
		return (-1);
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}
