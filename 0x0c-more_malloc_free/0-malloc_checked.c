#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - Allocation with malloc.
  * @b: Mem size.
  *
  * Return: Pointer to  memory.
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
