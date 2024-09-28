#include <stdio.h>
int main()
{
	int year;
	printf("enter a year to check: ");
	scanf("%i", &year);
	
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("the year is a leap year.");
	}
	else
	{
		printf("it is not a leap year");
	}
	return 0;
}


