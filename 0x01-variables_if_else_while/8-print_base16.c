#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char A;

	for (n = 48; n <= 57; ++n)
	{
		putchar(n);
	}
	for (A = 'A'; A <= 'F'; ++A)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
