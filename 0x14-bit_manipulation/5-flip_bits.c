#include "main.h"

/**
  * flip_bits - bit flip.
  * @n: 1 num
  * @m: 2 num
  *
  *
  * Return: flips
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int i;

	for (i = 0; XOR; XOR >>= 1)
	{
		if (XOR & 1)
		{
			i++;
		}
	}

	return (i);
}
