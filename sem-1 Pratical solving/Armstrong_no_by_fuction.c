#include<stdio.h>

void armstrong(int n){
    int rem,sum=0,original;
    original = n;
    while(n > 0){
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n/10;
    }
    if(original == sum){
        printf("number is Armstrng");
    }else{
        printf("number is not armstrong");
    }
}

int main(){
    int num;
    printf("Enter a number to check if its armstrong: ");
    scanf("%d",&num);

    armstrong(num);
    return 0;
}