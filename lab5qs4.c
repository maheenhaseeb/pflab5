#include <stdio.h>
int main()
{
	int age,citizenship;
	printf("enter your age: ");
	scanf("%i",&age);
	printf("enter you citizenship status;'0' for inactive and '1' for active: ");
	scanf("%i",&citizenship);
	if (age>=18 && citizenship==1)
	{
		printf("you are eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote");
	}
	return 0;
}


