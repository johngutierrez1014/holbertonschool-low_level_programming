#include "holberton.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
  int i = 0, n;
  
  while (*(s + i))
  {
    i++;
  }
  n = i - 1;
  while (n >= 0)
  {
    putchar(s[n]);
    n--;
  }
  putchar('\n');
}

