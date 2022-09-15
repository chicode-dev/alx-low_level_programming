#include "main.h"

/**
 * more_numbers - 0 to 14
 *
 * Return: 0
 */

void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		if (n > 9)
		{
			/* first number */
			_putchar(n / 10 + '0');
		}
		/* print second digit */
		_putchar(n % 10 + '0');
	}
	_putchar('\n');
}
