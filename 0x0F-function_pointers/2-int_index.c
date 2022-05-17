#include "function_pointers.h"

/**
 * int_index - searches integer in an integer array.
 * @array: int array.
 * @size: array size.
 * @cmp: pointer to value comparison.
 *
 * Return: just try doing your work,i dont need to tell you.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
