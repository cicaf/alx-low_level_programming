#include <stdio.h>

/**
 * main - Prints the first base 10 numbers
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
