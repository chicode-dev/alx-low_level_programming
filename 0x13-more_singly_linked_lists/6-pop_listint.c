#include "lists.h"

/**
 * pop_listint - ruturn head data
 * @head: linkedlist
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *temp;
	listint_t *h;

	if (*head == NULL)
		return (0);

	temp = *head;
	a = temp->n;
	h = temp->next;
	free(temp);
	*head = h;

	return (a);
}

