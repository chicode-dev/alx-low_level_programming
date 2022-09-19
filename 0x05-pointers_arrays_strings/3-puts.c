#include "main.h"

/**
 * _puts - string with new line
 * @str - parameter string;
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;
	int len = _strlen(str);

	for (; n < len; n++)
	{
		_putchar(str[n]);
		str++;
	}
	_putchar('\n');
}
