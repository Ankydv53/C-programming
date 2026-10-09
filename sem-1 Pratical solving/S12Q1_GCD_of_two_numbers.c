#include<stdio.h>
int main(){
    int num1,num2,gcd,i;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    gcd = 1;
    for(i = 1;i <= num1 && i <= num2;i++){
        if(num1 % i == 0 && num2 % i ==0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d",num1,num2,gcd);
    return 0;
}