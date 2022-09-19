#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: char parameter
 * Return: void
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int i = len - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
