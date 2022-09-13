#include "main.h"

/**
 * int _islower - checks lower case letter
 * c - int parameter
 * Return: 1 (Success)
 */

int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
