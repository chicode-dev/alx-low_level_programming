#include <stdio.h>

/**
 * main - sum fibonacci
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long n1 = 0;
	unsigned long n2 = 1;
	unsigned long n3;
	float sum;

	while (1)
	{
		n3 = n1 + n2;
		if ((n3 <= 4000000) && ((n3 % 2) == 0))
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
	printf("%.0f\n", sum);
	return (0);
}
