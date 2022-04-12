#include "main.h"

/**
 * _islower - the main running function.
 * @c: the parameter
 * Return: 1 or 0 binary
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
