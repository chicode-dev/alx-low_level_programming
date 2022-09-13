#include "main.h"

/**
 * times_table - prints times table
 * Return: numbers
 */

void times_table(void)
{
	int j;
	int k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 10; k++)
		{
			int product = j * k;
			_putchar(product);
		}
		_putchar('\n');
	}
}
