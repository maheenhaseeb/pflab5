#include <stdio.h>
int main()
{
	int num1,num2,num3,greatest;
	printf("enter the first number: ");
	scanf("%i",&num1);
	printf("enter the second number: ");
	scanf("%i",&num2);
	printf("enter the third number: ");
	scanf("%i",&num3);
	
	if (num1 >= num2) {
        if (num1 >= num3) {
            printf("The greatest number is: %d\n", num1);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    } else {
        if (num2 >= num3) {
            printf("The greatest number is: %d\n", num2);
        } else {
            printf("The greatest number is: %d\n", num3);
        }
    }
    return 0;

}

