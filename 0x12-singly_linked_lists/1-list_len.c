#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints elements in list
 * @h: input
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
