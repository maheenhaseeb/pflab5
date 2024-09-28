#include <stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%i",&num);
	if (num>0)
	{
		if (num%2 == 0)
		{
			printf("number is a postive even integer");
		}
		else
		{
			printf("number is an positive odd integer");
		}
	}
	else
	{
		printf("number is a negative integer");
	}
	return 0;
}

