#include <stdio.h>

unsigned int sumD(unsigned int num)
{
	if (num == 0)
		return 0;
	return (num % 10) + sumD(num /10);

}
int main()
{
	printf("sum of the digits in this number is %d",sumD(78721));
			return 0;

}
