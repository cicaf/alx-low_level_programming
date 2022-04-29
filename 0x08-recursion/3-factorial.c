#include "main.h"

/**
  * factorial - give the factrial.
  * @n: the number to be factorialed...
  *
  * Return: integer value
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
