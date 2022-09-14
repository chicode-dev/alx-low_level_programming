#include <stdio.h>i

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
	for (n = 0; n < 51; n++)
	{
		if (n == 50)
		{
			printf("%u\n", n3);
		}
		else
		{
			n3 = n1 + n2;
			printf("%u, ", n3);
			n1 = n2;
			n2 = n3;
		}
	}
	return (0);
}
