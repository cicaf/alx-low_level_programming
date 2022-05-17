#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - gives sum of two numbers.
 * @a: The 1st  num.
 * @b: The 2nd num.
 *
 * Return: sum of a+b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives the difference of two numbers.
 * @a: The 1st  num.
 * @b: The 2nd num.
 *
 * Return: a-b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of two numbers.
 * @a: 1st  num.
 * @b: 2nd num.
 *
 * Return: axb.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - the division of two numbers.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: a/b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus of 2 nums.
 * @a: 1st num.
 * @b: 2nd num.
 *
 * Return: a%b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
