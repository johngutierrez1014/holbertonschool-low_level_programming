#include "holberton.h"

/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int row, count;

	for (count = 0; count <= 9; count++)
	{
		for (row = 0; row <= 14; row++)
		{
			if (row > 9)
				_putchar((row / 10) + '0');
			_putchar((row % 10) + '0');
		}
		_putchar('\n');
	}
}
