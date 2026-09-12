#include<stdio.h>

int sumof(int n);

int main(){
    int num;
    printf("Enter number to get factorail: ");
    scanf("%d",&num);
    printf("The factorail is: %d",sumof(num));
    return 0;
}

int sumof(int n){
    if(n == 0){
        return 1;
    }
    int sum = sumof(n - 1);
    int factorial = sum * n;
}