#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Check if parameter c represent an digit.
 * @c: Int representing an ascii character
 * Return: Return 1 if it is a digit otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 40 && c <= 57)
	{
		return (1);
	}
	return (0);
}
