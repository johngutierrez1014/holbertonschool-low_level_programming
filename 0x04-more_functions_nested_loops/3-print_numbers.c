#include "holberton.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers from 0-9.
 */

void print_numbers(void)
{
	int num;
	for( num = 0; num < 10; num ++)
		_putchar (num % 10);
	_putchar ("\n");
}
