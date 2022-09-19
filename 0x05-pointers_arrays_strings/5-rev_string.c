#include "main.h"

/**
 * rev_string - reverse strin
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	//int a;
	int b;
	
	while (s[count] != '0')
	{
		count++;
	}
	int mid = count / 2;
	char temp;

	for (b = 0; b < mid; b++)
	{
		temp = s[b];
		s[b] = s[count - b -1];
		s[count - i - 1] = temp;
	}
}


