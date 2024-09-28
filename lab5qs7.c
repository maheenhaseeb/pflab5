#include <stdio.h>
int main()
{
	int num1,num2;
	printf("enter first number: ");
	scanf("%i",&num1);
	printf("enter second number: ");
	scanf("%i",&num2);
	
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	
	printf("first number now is = %i\n",num1);
	printf("second number now is = %i\n",num2);
	return 0;
}

