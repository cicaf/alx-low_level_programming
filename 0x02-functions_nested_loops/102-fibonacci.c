#include <stdio.h>
#include <stdlib.h>
/**
 * main - insertion of the program.
 * Return: is just void
 */
int main(void)
{
	double a = 0;
	double b = 1;
	double f;
	int i;

	for (i = 0; i < 50; i++)
	{
		f = a + b;
		if (i != 49)
			printf("%.f, ", f);
		else
			printf("%.f\n", f);
		a = b;
		b = f;
	}
	return (0);
}
