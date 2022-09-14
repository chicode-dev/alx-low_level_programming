#include <stdio.h>

/**
 * main - sum fibonacci
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long n3;
	unsigned long sum;

	for (n = 0; n < 50; n++)
	{
		n3 = n1 + n2;
		if (n3 < 4000000 && (n3 % 2) == 0)
		{
			sum = n3 + sum;
		}
		else
		{
			break;
		}
		n1 = n2;
		n2 = n3;
	}
	printf("%lu\n", sum);
	return (0);
}