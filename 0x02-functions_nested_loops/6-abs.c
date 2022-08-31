#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - returns absolute function
 *
 * @n: number of arguments
 * Return: returns abs number
 */

int _abs(int n)
{
if (n < 0)
return (-1 * n);
else
return (n);
}
