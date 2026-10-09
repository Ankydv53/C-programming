#include<stdio.h>

void palindrome(int n){
    int rem,sum=0,original;
    original = n;
    while(n > 0){
        rem = n % 10;
        sum = sum * 10 + rem;
        n = n/10;
    }
    if(original == sum){
        printf("The %d is palindrome",original);
    }else{
        printf("The %d is not palindrome",original);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    palindrome(num);
    return 0;
}