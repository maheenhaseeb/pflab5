#include <stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%i",&age);
	if (age>=1 && age<=12)
	{
		printf("you are a child");
	}
	else if (age>=13 && age<=19)
	{
		printf("you are a teenager");
	}
	else if (age>=20 && age<=49)
	{
		printf("you are a senior");
	}
	else
	{
		printf("you are a senior");
	}
	return 0;
}


