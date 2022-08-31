#include "main.h"
/**
 * print_alphabet_x10  -  prints 10 times the alphabety, then new line..
 *
 * Return: nothing.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char Alpha;

	while (count < 10)
	{
		for (Alpha = 'a'; Alpha <= 'z'; Alpha++)
		{
			_putchar(Alpha);
		}

		_putchar('\n');

		count++;
	}
}
