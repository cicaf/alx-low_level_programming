#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	char *ar;
	n = 5;
	ar = malloc(n * sizeof(char));
	ar[0] = 'c';
	ar[1] = 'o';
	ar[2] = 'o';
	ar[3] = 'l';
	ar[4] = 'e';

	printf("This what it says %s ",ar);

	return 0;
}
