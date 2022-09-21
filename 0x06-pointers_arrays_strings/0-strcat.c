#include "main.h"

/**
 * *_strcat - adds two strings
 * @*dest: first parameter
 * @*src: second parameter
 * Return: char return
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j = 0;
	int i = 0;
	/* get len or dest */
	while (dest[len] != '\0')
		len++;

	/* concat 2 strings */
	for (; src[j] != '\0'; j++)
	{
		len++;
		dest[len] = src[j];
	}

	/* end dest str */
	dest[len] = '\0';

	/* print string */
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++
	}
	Return (_putchar(dest));
}
