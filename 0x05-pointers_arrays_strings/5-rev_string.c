#include "main.h"

/**
 * rev_string - reverse strin
 * @s: string parameter
 * Return: void
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		/* len of string */
		count++;
	}
	str = s;

	/* loop through len of str */
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			/* take the first char value and make it the corresponing end char use pointers instead of array */
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}


