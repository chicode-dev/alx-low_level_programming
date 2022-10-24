#include "lists.h"

/**
 * get_nodeint_at_index - nth node pirint
 * @head: linkelist
 * @index: int
 * Return: address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *curr;

	while (head != NULL)
	{
		if (count == index)
		{
			curr = head;
		}
		head = head->next;
		count++;
	}

	return (curr);
}
