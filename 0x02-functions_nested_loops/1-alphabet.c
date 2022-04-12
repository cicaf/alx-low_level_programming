#include "main.h"
/**
 * print_alphabet - will print the alphabet
 *
 * Return: 0 for a succesfull run
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
