#include <stdlib.h>
#include "main.h"
/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: pointer to the memory previously allocated with malloc
  * @old_size: memory space allocated for ptr.
  * @new_size: memory space of new memory block.
  *
  * Return: pointer to new mem block, NULL or ptr.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
	}
	if (old_size < new_size && (ptr != NULL))
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		for (i = 0; i < old_size; i++)
			new_ptr[i] = ((char *)ptr)[i];
		free(ptr);
	}

	return (new_ptr);
}
