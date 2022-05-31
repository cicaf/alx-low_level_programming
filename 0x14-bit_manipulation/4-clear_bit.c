#include "main.h"

/**
  * clear_bit - set bit 0.
  * @n: num.
  * @index: position change.
  * Return: 1 if cool
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int start = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}
	start <<= index;
	*n &= ~start;

	return (1);
}
