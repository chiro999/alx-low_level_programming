#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array of elements
 * @size: size of the array
 * @action: function pointer
 *
 * Return: elements of the array after passing through the action function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
