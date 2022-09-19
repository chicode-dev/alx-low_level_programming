#include "main.h"

/**
 * rev_string - reverse strin
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0;
	int a;
	int b;
	
	while (s[count] != '0')
	{
		count++;
	}
	a = count - 1;
	char secondstr[count];

	for (b = 0; b < count; b++)
	{
		secondstr[b] = s[a];
		a--;
	}	
	secondstr[b] = '\0';
}


