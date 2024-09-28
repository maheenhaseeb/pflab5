#include <stdio.h>
int main()
{
	int age,income,crdt;
	printf("enter your age: ");
	scanf("%i",&age);
	printf("enter youur income: ");
	scanf("%i",&income);
	printf("enter your credit score: ");
	scanf("%i",&crdt);
	if (age>=18 && income>=10000 && crdt>=500)
	{
		printf("you are eligible for a loan");
	}
	else
	{
		printf("you are not eligible for a loan");
	}
	return 0;
}


