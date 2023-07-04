#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: double pointer to head node
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	/*check if list is empty*/
	if (*head == NULL)
		return (0);

	ptr = *head;
	data = ptr->n;

	/*update head pointer to point to next node*/
	(*head) = (*head)->next;
	free(ptr);

	return (data);
}
