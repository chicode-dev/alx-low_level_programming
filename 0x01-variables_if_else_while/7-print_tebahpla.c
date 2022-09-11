#include <stdio.h>

/**
 * main - print the alphabet reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a <= 'a'; --a)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
