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
		int b = putchar(n);
		if (n < 57)
		{
			b;
			putchar(',');
			putchar(' ');
		}
		else
		{
			b;
			putchar('\n');
		}
	}
	return (0);
}
