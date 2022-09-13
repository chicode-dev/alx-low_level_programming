#include "main.h"

/**
 * int _islower - checks lower case letter
 *
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
		else
		{
			return (0);
		}
	}
}
