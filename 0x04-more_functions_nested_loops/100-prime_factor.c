#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long fact = 612852475143, div;

	while (div < (fact / 2))
	{
		if ((fact % 2) == 0)
		{
			fact /= 2;
			continue;
		}

		for (div = 3; div < (fact / 2); div += 2)
		{
			if ((fact % div) == 0)
				fact /= div;
		}
	}

	printf("%ld\n", fact);

	return (0);
}
