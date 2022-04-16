#include <stdio.h>
/**
 *main - to just check the use of els if and elsif...
 *Return: just void
 */

int a,b,c;

int big(int a,int b, int c)
{	int largest;
	printf("please insert a :");
	scanf("%d ",&a);

	printf("please insert b : ");
	scanf("%d ",&b);

	printf("Please insert c :");
	scanf("%d ",&c);

	if( a > b && a > c)
	{
		int largest = a;
		printf("%d is the greatest of them all", a);
	}
	else if (b > a && b >> c)
		
	{	int largest = b;
		printf("%d is the largest of them all ", b);
	}

	else {
		int largest = c;
		printf("%d is thelargest ",c);
	}

	return largest;

}

int main()

{
	printf("%d ",big(3,6,0));
	return 0;

}
