#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head: double pointer to head
 * @str: string
 * Return: pointer to node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last_node;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);

	last_node->str = strdup(str);
	last_node->len = strlen(str);
	last_node->next = NULL;

	if (*head == NULL)
		*head = last_node;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = last_node;
	}

	return (last_node);
}
