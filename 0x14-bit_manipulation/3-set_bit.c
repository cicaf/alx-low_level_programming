#include "main.h"

/**
  * set_bit - indices.
  * @n: num.
  * @index: indeces.
  * Return: recursive.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int start = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	start <<= index;
	*n = *n | start;

	return (1);
}
