#include <stdio.h>

/**
 * main - combinations of numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int n;

	for (n = 48; n <= 57; ++n)
	{
		putchar(n);
		for (i = 48; i <= 57; ++i)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
