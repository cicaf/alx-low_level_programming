#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
  * is_prime_number - Returns if prime or nuh
  * @n: the number
  *
  * Return: int
  */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
  * check_prime - prime checker
  * @n: the number
  * @i: iteration instances
  *
  * Return: 1 for prime or 0 for else
  */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
