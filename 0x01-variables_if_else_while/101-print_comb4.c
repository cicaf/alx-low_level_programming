#include <stdio.h>
/**
 * main - represent Entry Point to the program
 *
 * Return: 0 to stop the program
 */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 9; k++)
{
if (k > j && j > i)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
