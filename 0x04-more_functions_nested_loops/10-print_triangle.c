#include "main.h"
#include <stdio.h>

/**
 * print_triangle - Print triangle dependent on the parameter size.
 * @size : The height of thetriangle
 * Return: void.
 */
void print_triagle(int size)
{
	int i;
	int x;
	int spaces;

	for (i = 0; i < size; i++)
	{
		for (spaces = size - 1 - i; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (x = 0; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
