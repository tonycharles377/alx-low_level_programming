#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer
 * @str: string
 * Return: pointer to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_cpy;
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	str_cpy = malloc(strlen(str) + 1);
	if (str_cpy != NULL)
		strcpy(str_cpy, str);
	else
	{
		free(head);
		return (NULL);
	}

	new_node->str = str_cpy;
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
