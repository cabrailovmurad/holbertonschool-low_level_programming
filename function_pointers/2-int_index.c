#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to compare values.
 *
 * Return: Index of the first matching element,
 *         -1 if no match is found or if size <= 0 or if array/cmp is NULL.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
