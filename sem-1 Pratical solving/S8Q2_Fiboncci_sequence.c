#include<stdio.h>
int fibonacci(int n){
    int fibo;
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("The fibonacci sequqnce is %d ",fibonacci(num));
    return 0;
}