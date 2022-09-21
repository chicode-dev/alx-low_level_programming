#include "main.h"

/**
 * *_strncpy - copy string
 * @dest: destination string
 * @src: source string
 * @n: int para
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}


