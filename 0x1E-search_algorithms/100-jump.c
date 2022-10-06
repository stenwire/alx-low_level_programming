#include "search_algos.h"
#include <math.h>

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
                                size_t x = 0;
                                size_t y;

                                for (j = head; j <= i; j++)
                                {
                                        if (array[j] == value)
                                        {
                                                size_t res = array[j];
                                                for (x = 0; x <= head; x+=jump)
                                                {
                                                        printf("Value checked array[%ld] = [%ld]\n", x, x);
                                                }

                                                for (y = head; y <= res; y++)
                                                {
                                                        if ( y == head)
                                                        {
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
        else if (value > array[size - 1])
        {
                size_t j = size-1;
                size_t k = j + 3;
                size_t x = 0;
                size_t y;
                for (x = 0; x <= j; x+=jump)
                {
                        printf("Value checked array[%ld] = [%ld]\n", x, x);
                }

                for (y = j; y <= j; y++)
                {
                        if ( y == j)
                        {
                                printf("Value found between indexes [%ld] and [%ld]\n", j, k);
                        }
                        printf("Value checked array[%ld] = [%ld]\n", y, y);
                }
        } return (-1);

        }

