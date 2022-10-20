#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node
 * @head: A pointer to the head
 * @str: The string
 *
 * Return: If the function fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	it len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
