#include <stdio.h>

/**
 * main - fibonacci numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n = 3;
	int n1 = 1;
	int n2 = 2;
	int n3;

	printf("%d, %d, ", n1, n2);
	while (n < 51)
	{
		n3 = n1 + n2;
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
		n++;
	}
	return (0);
}
