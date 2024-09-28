#include <stdio.h>
int main()
{
	int score;
	printf("Enter your score: ");
	scanf("%d", &score);
	if (score >= 90){
		if (score >= 95){
			printf("grade A+ \n");
		}
		else{
			printf("grade A \n");
		}
	}
	else if(score >= 80){
		if (score >= 85){
			printf("grade B+ \n");
		}
		else {
			printf("grade B \n");
		}
	}
	else {
		printf("grade c or lower \n");
	}
		
	return 0;
}
