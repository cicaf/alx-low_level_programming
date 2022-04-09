#include <stdio.h>

/**
 * main - prints the needed numbers in base 16
 * a new line might be added
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char abcd;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (abcd = 'a'; abcd <= 'f'; abcd++)
	{
		putchar(abcd);
	}
	putchar('\n');
	return (0);
}
