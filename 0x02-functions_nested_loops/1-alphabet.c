#include "main.h"
/**
 * print_alphabet - fonction that prints the alphabet in lowercase followed
 * by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lettre = 'a';

	while(lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}
	_putchar('\n');
	return (0);
}
