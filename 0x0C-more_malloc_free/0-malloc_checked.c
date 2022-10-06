#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates mem
 * @b: unsigned int
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
