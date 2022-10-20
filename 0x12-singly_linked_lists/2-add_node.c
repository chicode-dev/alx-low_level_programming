#include "lists.h"

/**
 * add_note - node at start
 * @head: head of list
 * @str: string
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h;
	size_t n;

	new_h = malloc(sizeof(list_t));
	if (new_h == NULL)
		return (NULL);

	new_h->str = strdup(str);

	for (n = 0; str[n]; n++)
		;

	new_h->len = n;
	new_h->next = *head;
	*head = new_h;

	return (*head);
}
