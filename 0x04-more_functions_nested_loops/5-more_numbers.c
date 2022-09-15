#include "main.h"

/**
 * more_numbers - 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n;
	int j;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	for (j = 48; j <= 52; j++)
	{
		_putchar('1' + j);
	}
	_putchar('\n');
}
