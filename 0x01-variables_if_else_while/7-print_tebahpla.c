#include <stdio.h>

/**
 * main -prints the lowercase alphabet in reverse,
 * Return: Always 0 (Success)
 */

int main(void)
{
	char car;

	for (car = 'z'; car >= 'a'; car--)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
