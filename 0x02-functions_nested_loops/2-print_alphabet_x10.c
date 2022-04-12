#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
/**
 * print_alphabet_x10 - prints it.
 * 
 */

void print_alphabet_x10(void)
{
	int alpha;
	int alpha2;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (alpha2 = 'a'; alpha2 <= 'z'; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
