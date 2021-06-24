#include "holberton.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int row;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
