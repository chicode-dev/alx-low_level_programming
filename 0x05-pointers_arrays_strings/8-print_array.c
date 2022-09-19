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
	int len = sizeof(a) / sizeof(a[0]);
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%d", arr[0]);
		printf(", %d", arr[i + 1]);
	}
	_putchar('\n');
}

