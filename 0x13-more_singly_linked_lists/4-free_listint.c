#include "lists.h"

/**
 * listsint_t - free a list
 * @head: linkedlist
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
