#include <stdio.h>

/**
 * main - print combo of numbers no repeats
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; ++i)
	{
		for (j = 48; j <= 57; ++j)
		{
			if (i+j != j+i)
			{	
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

