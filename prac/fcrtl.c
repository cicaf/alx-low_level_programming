#include <stdio.h>
//A function to work out a factorial...using if...

int factorial(int n)
{
	if (n <= 1)
		return 1;
	return n * factorial(n-1);
}
int main ()
{
	printf("%d \n",factorial(4));
	return 0;

}
