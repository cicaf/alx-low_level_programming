#include <stdio.h>
#include<stdlib.h>

int main()
{
	int age;
	double gpa;
	char name[20] ;

	printf("Whats your name?What is your name? ");

	scanf("%s", name);

	printf("Whats your age,what is your age???");
	scanf("%d", &age);

	printf("Whats your gpa...what is your gpa??");
	scanf("%lf", &gpa);

	printf("Your name is %s , you are %d , years old... and have a %f in your gpa ", name , age ,gpa);

	return(0);

}
