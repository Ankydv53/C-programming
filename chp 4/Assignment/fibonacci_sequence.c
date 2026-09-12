#include<stdio.h>

int fib(int n);

int main(){
    printf("Enter number: ");
    int num;
    scanf("%d",&num);

    return 0;
}

int fib(int n){
    int fibon = fib(n-1)+fib(n+2);
}