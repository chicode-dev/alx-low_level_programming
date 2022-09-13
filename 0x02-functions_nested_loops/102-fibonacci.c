#include <stdio.h>

/**
 * main - fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 3U;
	int n1 = 1U;
	int n2 = 2U;
	unsigned int n3;

	printf("%u, %u, ", n1, n2);
	while (n < 51)
	{
		n3 = n1 + n2;
		printf("%u, ", n3);
		n1 = n2;
		n2 = n3;
		n++;
	}
	return (0);
}
