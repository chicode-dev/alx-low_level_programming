#include "main.h"

/**
 * _puts - string with new line
 * @str - parameter string;
 * Return: void
 */

void _puts(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		char newstr[n] = str;

		_putchar(newstr[n]);
		n++;
		str++;
	}
	_putchar('\n');
}
