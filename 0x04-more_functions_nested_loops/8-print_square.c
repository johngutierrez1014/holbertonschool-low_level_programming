#include "holberton.h"

/**
 * print_square - Prints a squareusing the character #.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, width;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			if (row == size - 1)
			continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
