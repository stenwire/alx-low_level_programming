#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_sign - evaluates a value
 *
 * @param sign: value of sign
 * @param n: value of parameter
 * @return int: returns an integer number
 */

int print_sign(int n)
{
    int sign;

    if( n > 0)
    {
        _putchar("+");
        sign = 1;
    } else if( n == 0) {
        _putchar("0");
        sign = 0;
    } else {
        _putchar("-");
        sign = -1;
    }
    
    return (sign);
}
