#include "main.h"

/**
 * *_strncat - add two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;

	for (; i < n; i++)
	{
		dest[len] = src[i];
		len++;
	}

	dest[len] = '\0';

	return (dest);
}
