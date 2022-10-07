#include "search_algos.h"
#include <math.h>

/**
 * interpolationSearch - interpolation Search algorithm
 *
 * @arr: pointer to array[0]
 * @lo: lower index to array
 * @hi: : higher index to array
 * @x: target value
 * Return: return index or -1
 */

int interpolationSearch(int arr[], int lo, int hi, int x)
{
int pos;
int count = 1;

while (count <= 2108)
{
count++;
if (lo <= hi && x >= arr[lo] && x <= arr[hi])
{
pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));

if (arr[pos] == x)
{
printf("Value checked array[%d] = [%d]\n", pos, x);
return (pos);
}
printf("Value checked array[%d] = [%d]\n", pos, count);
if (arr[pos] < x)
{
return (interpolationSearch(arr, pos + 1, hi, x));
}

if (arr[pos] > x)
{
return (interpolationSearch(arr, lo, pos - 1, x));
}

}
}
printf("Value checked array[%d] is out of range\n", count);
return (-1);
}

/**
 * interpolation_search - interpolation_search algorithm
 *
 * @array: pointer to the first element of the array to search
 * @size: size of array
 * @value: target value
 * Return: return interpolationSearch
 */

int interpolation_search(int *array, size_t size, int value)
{
return (interpolationSearch(array, 0, size - 1, value));
}
