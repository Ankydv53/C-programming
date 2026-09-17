#include<stdio.h>
int main(){
    int num1,num2,extra;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    extra = num1;
    num1 = num2;
    num2 = extra;

    printf("Interchnaged value are : %d and %d",num1,num2);

}