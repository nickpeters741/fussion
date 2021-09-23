   
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size in bytes of the space allocated for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: If successful, return pointer to new memory block.
 * if new_size == old_size, return ptr
 * if new_size == NULL and ptr != NULL, return NULL
 * if malloc error, return NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	unsigned int index, fin;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == 0 && ptr == 0 && old_size != 0)
	{
		newptr = malloc(old_size);
		if (newptr == 0)
			return (0);
		return (newptr);
	}
	if (ptr == 0 && new_size != 0)
	{
		newptr = malloc(new_size);
		if (newptr == 0)
			return (0);
		return (newptr);
	}
	fin = new_size > old_size ? old_size : new_size;
	newptr = malloc(new_size);
	if (newptr == 0)
		return (0);
	oldptr = ptr;
	for (index = 0; index < fin; index++)
		*(newptr + index) = oldptr[index];
	free(ptr);
	return (newptr);
}
