#include "main.h"

/**
 * print_alphabet - prints alphabet -- Lower case.
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char Alpha;

	for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
	{
		_putchar(Alpha);
	}

	_putchar('\n');
}
