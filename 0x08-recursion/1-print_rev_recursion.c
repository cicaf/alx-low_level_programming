#include "main.h"

/**
  * _print_rev_recursion - Reverse a string and then print it.
  * @s: string in question as parameter.
  *
  * Return: the normal zero or void
  */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}


