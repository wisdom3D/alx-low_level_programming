#include "main.h"

/**
 * swap_int -swap a values of two integers
 *
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
