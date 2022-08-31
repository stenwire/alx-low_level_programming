#include "main.h"

/**
 * print_sign - checks sign of integers
 * @n: receives value
 *
 * Return: respective sign accd to value of n
 */
int print_sign(int n)
{
	int sign;

	sign = 0;
	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	else
	{
		_putchar('0');
	}
	return (sign);
}
