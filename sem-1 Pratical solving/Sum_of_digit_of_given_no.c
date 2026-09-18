#include<stdio.h>
int main(){
    int num,original,sum=0,rem;
    printf("Enter number: ");
    scanf("%d",&num);

    original = num;
    while(num > 0){
        rem = num % 10;
        sum = sum + rem;
        num = num/10;
    }

    printf("Sum of digits of %d is: %d",original,sum);
    
    return 0;
}