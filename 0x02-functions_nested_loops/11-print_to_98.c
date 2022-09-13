#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers
 * @n: parameter int
 * Return:numbers
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <=98; i++)
	{
		if (i < 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
}
