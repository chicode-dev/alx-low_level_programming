#include <stdio.h>

/**
 * main - combinations of numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n <= 57; ++n)
	{
		if (n < 57)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(n);
		}
	}
	return (0);
}
