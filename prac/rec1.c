#include <stdio.h>
//a function called sumDigits to return the sum of all the digits in a given integer value...
int sumDigits(int n )
{
	if (n <= 1)
		return 1;
	return n + sumDigits(n-1);
}

int main()
{
	printf("This is the sum of all the digits in %d ",sumDigits(90));
	return 0;

}
