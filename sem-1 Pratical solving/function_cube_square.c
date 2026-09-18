#include<stdio.h>

int square(int n){
    return n* n;
}

int cube(int n){
    return n * n * n;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    printf("Square of %d is %d\n",num,square(num));
    printf("Cube of %d is %d",num,cube(num));

    return 0;
}