#include <stdio.h>


double cube(double a, double b ,double c)
{
	double result = a*b*c;
	return(result);

}
int main()
{
	printf("this is what you get %f ",cube(2,3,4));

	return 0;

}
