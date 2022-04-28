#include <stdio.h>

int factorial(int n)
{
	int i = 1;
	int fact = 1;

	while (i <= n)
	{
		fact = fact * i;
		i ++;

	}
	return (fact);

}

int main()
{
	int f = factorial(10);
	printf("The factorial of 10 is %d",f);
	return 0;



}
