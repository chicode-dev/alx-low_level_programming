#include <stdio.h>

/**
 * main - combo of 3 numbers print
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	int k;
	
	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			for (k = 48; k <= 57; ++k)
			{
				if (j != i && k != j && i != k && i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i == 55 && j == 56 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
