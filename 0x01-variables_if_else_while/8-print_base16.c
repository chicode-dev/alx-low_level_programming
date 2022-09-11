#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char a;

	for (n = 48; n <= 57; ++n)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; ++a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
