#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: The pointer to an int.
 * @b: The pointer to an int.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
