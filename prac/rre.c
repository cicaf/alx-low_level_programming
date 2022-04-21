#include <stdio.h>
#include <stdlib.h>

/**
 *
 * main - a continuation of arrays.
 * Return: The data type we will be using...
 */

int main()
{

	char c;
	int n;

	double marks[16]={75.0,77.0,80.8,90.9,79.9,70};
	printf("%f ",marks[0]);
	double signals = marks[3];
	printf("%f \n \n \n",signals);
/**
 *  Here we are printing out memory addresses
 * Note the %p for pointers
 */
	printf("address of n is: %p\n", &n);
	printf("Address of character c is %p\n", &c);

	return 0;

}
