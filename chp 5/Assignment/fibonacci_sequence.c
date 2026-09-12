#include<stdio.h>

int fib(int n);

int main(){
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    printf("%d",fib(num));

    return 0;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    int fibo1 = fib(n-1);
    int fibo2 = fib(n-2);
    int fibn = fibo1 + fibo2;

    return fibn;
}