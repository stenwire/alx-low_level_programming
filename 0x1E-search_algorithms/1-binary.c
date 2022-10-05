#include "search_algos.h"

/**
 * show_info - prints an array of integers
 * @array: array to print
 * @size: size of array
 *
 * return: void
 */
void show_info(int *array, size_t size)
{
	size_t i;

	printf("Searching in array:");
	for (i = 0; i < size; i++)
	{
		printf(" %d", array[i]);
		if (i != size - 1)
			printf(",");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	size_t head, mid, tail;

	if (array != NULL && size > 0)
	{
		head = 0;
		tail = size - 1;
		show_info(array + head, tail + 1 - head);
		while (head < tail)
		{
			mid = (head + tail) / 2;
			if (array[mid] < value)
				head = mid + 1;
			else if (array[mid] > value)
				tail = mid;
			else
				return (mid);
			show_info(array + head, tail + 1 - head);
		}
	}
	return (-1);
}
