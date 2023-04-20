#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - iterates over an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to perform on each element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
