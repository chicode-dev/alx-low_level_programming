#include "main.h"

/**
 * print_line - prints a _ line
 * @n: int parameter
 * Return: void
 */

void print_line(int n)
{
	int a = 0;
	
	if (n <= 0)
	{
		_putchar('\n');
		break;
	}
	else
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
