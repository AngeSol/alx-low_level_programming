#include "lists.h"

/**
 * pop_listint - Deletes the head
 * @head: A pointer to the adress
 * Return: If the linked list....
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);
	tmp = *head;
	ret = (*head)->next;

	free(tmp);

	return (ret);
}
