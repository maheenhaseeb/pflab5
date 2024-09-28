#include <stdio.h>
int main()
{
	int num,sum;
	printf("enter a number: ");
	scanf("%i",&num);
	
	if (num == 0){
		printf("sum is zero \n");
	}
	else if (num % 9 == 0 ){
		printf("the summ of digits is 9 \n");
	}
	else {
		sum = num % 9;
		printf("sum is %d\n",sum);
	}
	return 0;
}
