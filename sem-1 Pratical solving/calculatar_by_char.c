#include<stdio.h>
int main(){
    int num1,num2;
    char choice;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("enter second number: ");
    scanf("%d",&num2);

    printf("Enter operator: + - * / :");
    scanf(" %c",&choice);

    switch(choice){
        case '+':
        printf("Addition of %d and %d is: %d",num1,num2,num1+num2);
        break;

        case '-':
        printf("Substraction of %d and %d is: %d",num1,num2,num1-num2);
        break;

        case '*':
        printf("Multiplication of %d and %d is: %d",num1,num2,num1*num2);
        break;

        case '/':
        printf("Division of %d and %d is: %d",num1,num2,num1/num2);
        break;
        
        default:
        printf("Enter a valid operator");

    }
    return 0;
}