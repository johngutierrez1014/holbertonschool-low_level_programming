#include "holberton.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	while (s[j++])
		_putchar(s[i]);
		i++;

	for (j = i - 1; j >= i / 2; j--)
	{
		tmp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = tmp;
	}
}
