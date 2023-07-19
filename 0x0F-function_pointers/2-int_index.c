#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: array of elements
 * @size: size of array
 * @cmp: checks for the presence of an integer
 *
 * Return: Returns all integers found in the array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if(array &&cmp)
		{
			for (i = 0; i < size; i++)
			{
				if(cmp(array[i])
					return (i);
		
			}
		}	
	}		
}
