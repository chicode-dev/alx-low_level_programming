#include <stdio.h>

/**
 * main - fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long n3;

	for (n = 0; n < 50; n++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);
		n1 = n2;
		n2 = n3;

		if (n == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
