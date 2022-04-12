#include "main.h"
/**
 * _isalpha - is the new code entrance
 * @c: is the parameter.
 * Return: either 1 or 0 also binary.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
