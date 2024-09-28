#include <stdio.h>
int main()
{
	int attendance,assignment,exam;
	printf("enter your attendance: ");
	scanf("%i",&attendance);
	printf("enter your assignment score: ");
	scanf("%i",&assignment);
	printf("enter your exam score: ");
	scanf("%i",&exam);
	
	if (attendance >= 80){
		if (assignment >= 80){
			if (exam >= 80){
				printf("grade A");
			}
		}
		else if (assignment >= 70 && assignment <= 79){
			if(exam >= 70 && exam <= 79){
				printf("grade B");
			}
		}
		else if (assignment >= 60 && assignment <= 69){
			if (exam >= 60 && exam <= 69){
				printf("grade C");
			}
		}
	}
	else{
		printf("repeat the course.");
	}
	return 0;
}
