#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints last digit
 *
 * @n: variable to receive int value
 * Return: value of n
 */

int print_last_digit(int n)
{
if (n < 0)
n = -1 * n;
else
n = n;

n = n % 10;
_putchar (n + '0');

return (n);
}
