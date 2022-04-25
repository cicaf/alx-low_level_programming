#include <stdio.h>

int main()
{
	int age = 30;
	int *pAge =&age;

	printf("I will be a millionaire at age %d years old...thats a promise...\n",age);
	printf("The addres of my age in hex is stored in %p \n ", &age);
	printf("We want to see if our pointer conforms to everything %p",pAge);

	printf("\n \n \n The DEREFERENCING Section ");

	*pAge = 31;

	printf("Lets see if it works... %d\n ",age);

	printf("Value stored in %d \n",*pAge);

	printf("The pointer is however still %p ",pAge);

	return 0;

}
