#include "main.h"
/**
 * print_alphabet_x10 - fonction
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10 (void);
{
	char lettre = 'a';
	int nbre = 0;
	while (nbre < 10)
	{
		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}
		_putchar('\n');
		nbre++;
	}
}
