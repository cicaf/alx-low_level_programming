#include <stdio.h>

int max(int a, int b)
{
	int result;
	if (a > b)
	{
		result = a;

	}
	else {
		result = b;

	}
	return (result);

}

int main()
{
	printf("This is the largest of the twoo %d ", max(7,11));

}
