#include "main.h"

/**
 * _isupper - checks if int is uppercase
 * @c: the int parameter
 * Return: 1 (success) and 0 (failure)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
