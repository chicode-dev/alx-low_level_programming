#include "main.h"

/**
 * times_table - prints times table
 * Return: numbers
 */

void times_table(void)
{
	int j;
	int k;

	for (j = 48; j <= 57; j++)
	{
		for (k = 48; k <= 57; k++)
		{
			int product = j * k;

			_putchar(product);
		}
		_putchar('\n');
	}
}
