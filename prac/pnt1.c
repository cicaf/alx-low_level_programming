#include <stdio.h>

int main()
{
	int r;
	int *R;

	r = 300;
	R = &r;

	printf("This is the address of r %p \n",&r);

	printf("The pointer for r is %p \n",R);





	return 0;

}
