#include "main.h"
#include <stdio.h>


/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: input
 * Return: n
 */
void reset_to_98(int *n){
	*n=98;
}
int main()
{
	int num;
	num = 50;
	//int *pnum = NULL;
	pnum = &num;
	reset_to_98(&num);
	printf("num=%d\n", num);

	return 0;

}
