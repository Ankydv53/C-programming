//sum of n numbers by recursion

int sumof(int n);

#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("sum: %d",sumof(num));
}

int sumof(int n){
    if (n == 1){
    return 1;
   }
   int sumn = sumof(n - 1);
   int sum = sumn + n;
   return sum;
}