#include "main.h"
#include <stdio.h>

/**
 * print_array - just print an array
 * @a: array parameter
 * @n: amount to print
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	printf("%d", a[0]);
	for (; i < n - 1; i++)
	{
		printf(", %d", a[i + 1]);
	}
	_putchar('\n');
}

