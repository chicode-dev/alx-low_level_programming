#include "main.h"

/**
 *_abs - calulate abs value
 *@n - parameter int
 *Return - int a is returned
 */

int _abs(int n)
{
	if (n < 0)
	{
		int abs = n * -n;
		return (abs);
	}
	return (n);
}
