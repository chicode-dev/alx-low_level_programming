#include "main.h"

/**
 * _puts2 - string with new line
 * @str: parameter string
 * Return: void
 */

void _puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
