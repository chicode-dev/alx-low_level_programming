#include <stdio.h>

/**
 * main - fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int n1 = 0U;
	int n2 = 1U;
	unsigned int n3;

	for (n = 0; n < 50; n++)
	{
		n3 = n1 + n2;
		printf("%u", 3);
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
