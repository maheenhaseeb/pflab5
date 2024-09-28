#include <stdio.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%i",&num);
	num > 0 ? printf("positive") : num < 0 ? printf("negative") : printf("zero");
	
	return 0; 
}
