#include <stdio.h>
/**
 * main - lets seee...
 * This programm involves a function that takes a pointer to an int
 * as parameter and updates the value it points to to 98.
 * 
 * Return: may return an int...or void.
 *
 * reset_to_98 - resets our programme  or pint to 98.
 * @n: the parameter of our function...
 *
 */

void reset_to_98(int *n)
{
	*n = 700;

}
int main()
{
	int num;
	num = 50;
	int *pnum = NULL;
	pnum = &num;

         //*num = &num;
	printf("Before changing it to 98 ,its value is %d \n",num);

	reset_to_98(&num);
	printf("After changing it to 98 ... %d",num);

	return 0;

}
