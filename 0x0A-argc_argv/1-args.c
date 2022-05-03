#include "main.h"
#include <stdio.h>

/**
  * main - shows number of arg
  * @argc: arg count
  * @argv: arg vector
  *
  * Return: a zero
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
