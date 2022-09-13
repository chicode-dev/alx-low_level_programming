#include "main.h"

/**
 * _isalpha - check if input is a letter
 * @c: int c input
 * Return: 1 (Success) and 0 (failure)
 */

int _isalpha(int c)
{
	int a;
	int A;

	for (a = 97; a <= 122; a++)
	{
		for (A = 65; A <= 90; A++)
		{
			if (a == c || A == c)
			{
				return (1);
			}
		}
	}
	return (0);
}
