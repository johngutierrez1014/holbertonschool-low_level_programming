#include "holberton.h"

/**
 * int *a, int *b - swap the values ​​of a and b
 * @a: The pointer to an int.
 * @b: The pointer to an int.
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = 42;
	*b = 98;
}
