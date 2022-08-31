#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - evaluates a value
 *
 * @param n: value of parameter
 * @return int: returns an integer number
 */

int print_sign(int n)
{
    if( n > 0)
    {
        _putchar("+");
        return 1;
    } else if( n == 0) {
        _putchar("0");
        return 0;
    } else {
        _putchar("-");
        return -1;
    }
}
