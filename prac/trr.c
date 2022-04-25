#include <stdio.h>
void mod_par(int m)
{
	m = 402;

printf("yhr pointer of m is %p \n", &m);

}

int main (void)
{

	int n = 98;

	printf("The pointer for n is %p \n",&n);
	mod_par(n);

	printf("the figure n is %d ",n);

printf("The pointer for n is %p \n",&n);



       return 0;
}
