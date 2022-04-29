#include "main.h"

/**
  * _strlen_recursion - Calculate the length of my string
  * @s: the string
  *
  * Return: should give us an int
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
