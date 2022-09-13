#include "main.h"

/**
 * times_table - prints times table
 * Return: numbers
 */

void times_table(void)
{
	int j;
	int k;

	for (j = 0; j <= 9; j++)
	{
		_putchar('0');
		for (k = 0; k <= 9; k++)
		{
			_putchar(',');
			_putchar(' ');

			int product = j * k;

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
