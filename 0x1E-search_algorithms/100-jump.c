#include "search_algos.h"
#include <math.h>

/**
 * if_found - if value is found
 *
 * @head: pointer to the array[0]
 * @jump: jump step
 * Return: return int
 */

int if_found(size_t head, size_t jump)
{

size_t x = 0;

for (x = 0; x <= head; x += jump)
{
printf("Value checked array[%ld] = [%ld]\n", x, x);
}

return (1);
}

/**
 * if_not_found - if value is not found
 *
 * @size: size of array
 * @jump: jump step
 * Return: return int
 */

int if_not_found(size_t size, size_t jump)
{
size_t j = size - 1;
size_t k = j + 3;
size_t x = 0;
size_t y;

for (x = 0; x <= j; x += jump)
{
printf("Value checked array[%ld] = [%ld]\n", x, x);
}

for (y = j; y <= j; y++)
{
if (y == j)
{
printf("Value found between indexes [%ld] and [%ld]\n", j, k);
}
printf("Value checked array[%ld] = [%ld]\n", y, y);
}
return (1);

}

/**
 * jump_search - jump search algorithm
 *
 * @array: pointer to array[0]
 * @size: length of array
 * @value: target value
 * Return: returns index of value
 */

int jump_search(int *array, size_t size, int value)
{
size_t jump = sqrt(size);
size_t head = 0;
size_t i = jump;
size_t y;

if (value < array[size - 1])
{
while (i < size - 1)
{
if (value > array[i])
{
head = i;
i += jump;
}
else
{
size_t j = head;

for (j = head; j <= i; j++)
{
if (array[j] == value)
{
size_t res = array[j];
for (y = head; y <= res; y++)
{
if (y == head)
{
printf("%d", if_found(head, jump));
printf("Value found between indexes [%ld] and [%ld]\n", head, i);
}
printf("Value checked array[%ld] = [%ld]\n", y, y);
}
return (array[j]);
}
}
}
}
}
return (if_not_found(size, jump), -1);
}
