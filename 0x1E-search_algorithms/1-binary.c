#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 *
 * @array: pointer to array[0]
 * @size: length of the array
 * @value: value to search
 * Return: return value index
 */

int binary_search(int *array, size_t size, int value) {
        if (array == NULL)
        {
                return (-1);
        }
        for (size_t i = 0; i < size; i++)
        {
                printf("%ld, ", i);
        }
        printf("\n");
        int mid;
        mid = size / 2;
        // printf("%d\n", mid);

        if (value == mid)
        {
                return mid;
                if (mid == 0)
                {
                        return (-1);
                }
        } else if (value > mid)
        {
                array = mid;
                size = size - mid;
                // return (binary_search(array, size - mid, value));
        }
        else
        {
                size = size - mid;
        }
        printf("Searching in array:");
        binary_search(array, size, value);
}

int main(void)
{
        int array[] = {
                0, 1, 2, 3, 4, 5, 6, 7, 8, 9
        };
        size_t size = sizeof(array) / sizeof(array[0]);

        printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
        printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
        printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
        return (EXIT_SUCCESS);
}