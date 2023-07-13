#include "main.h"
#include <stdlib.h>

/**
 * array_range = produces an array of integers from min to max
 * @min: minimum value in the array
 * @max: maximum value in the array
 * Return: array values
 */

int *array_range(int min, int max)
{
	int *arr, i = 0; 
	int range = max - min;

	if (min > max)
	return (NULL);

	arr = malloc((sizeof(int) * range) + 4);

	if (arr == NULL)
	return (NULL);
	
	for (i = 0; max >= min; i++)
	arr[i] = min++;
	
	return (arr);
}
