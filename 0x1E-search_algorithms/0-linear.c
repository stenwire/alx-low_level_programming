#include "search_algos.h"

/**
 * linear_search - a linear search algorithm that
 * locates a target value in an array
 *
 * Some description
 * Example:
 *    user_function(22);
 *
 * @array: pointer to array of int
 * @size: length of array
 * @value: target value
 * Return: index 0f target
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}

	for (size_t i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	} return (-1);

}
