/ Program: Calculator
// Concept: while loop + switch
// Author: Ankit Yadav
// Date: 29-07-2026
#include<stdio.h>
int main(){
	while(1){
		printf("===============  calculator  ===============\n\n");
		float num1 , num2;
		printf("Enter first number: ");
		scanf("%f",&num1);
		printf("Enter second number: ");
		scanf("%f",&num2);
		int check;
		printf("\n\t\tChoose Operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit the program\n\nEnter input: ");
		scanf("%d",&check);
		switch(check)
		{
			case 1:
				printf("\nThe Addition is: %.2f",num1 + num2);
				break;
			case 2:
				printf("\nThe Subtraction is: %.2f",num1 - num2);
				break;
			case 3:
				printf("\nThe Multiplication is: %.2f",num1 * num2);
				break;
			case 4:
				if(num2 == 0){
					printf("!! Cannot divide by zero.");
					break;
					}
				printf("\nThe Division is: %.2f",num1 / num2);
				break;
			case 5:
				printf("\nExiting the program...");
				return 0;
			default:
				printf("\nEnter valid operation");
		}
		printf("\n\n\n");
	}
	return 0;
}

