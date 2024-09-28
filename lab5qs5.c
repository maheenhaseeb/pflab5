#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number: ");
	scanf("%i",&num1);
	printf("enter second number: ");
	scanf("%i",&num2);
	num1 > num2 ? printf("the first number is maximum \n") : printf("the second number is maximum\n");
	
	return 0;
}

