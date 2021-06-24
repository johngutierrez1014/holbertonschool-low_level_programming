#include "holberton.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int row, space;

	if (n > 0)
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (row == n - 1)
			continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
