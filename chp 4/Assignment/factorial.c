//factorial of n numbers
#include<stdio.h>
int main(){
	int i = 1;
	int num;
	int fact = 1;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num < 0){
		printf("Factorial is not defined for negative numbers.");
		return 0;
	}
	while(i <= num){
		fact *= i;
		i += 1;
	}
	printf("The factorial is: %d",fact);
	return 0;
}
		
