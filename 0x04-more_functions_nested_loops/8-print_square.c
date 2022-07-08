#include "main.h"
#include <stdio.h>

/**
 *print_square - Print square line dependent on the integer n.
 *n : The number of lines using '#' characters to use per riw and column
 * Return: void.
 */
void print_square(int n)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
