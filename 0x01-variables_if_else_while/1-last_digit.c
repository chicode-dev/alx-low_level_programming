#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - last digit of a number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* a number modoulo 10 gives last digit of the number */
	l = n % 10;

	if (l > 5)
	{
		char c[] = "and is greater than 5";
		printf("Last digit of %d is %s\n", n, c);
	}
	else if (l == 0)
	{
		char c[] = "and is 0";
		printf("Last digit of %d is %s\n", n, c);
	}
	else
	{
		char c[] = "and is less than 6 and not 0";
		printf("Last digit of %d is %s\n", n, c);
	}
	return (0);
}

