#include<stdio.h>
int main(){
    int num,rem,sum;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num > 0){
        rem = num % 10;
        
        while(num >= 10){
        num = num / 10;
        }
        sum = rem + num;

        printf("Sum of %d and %d is: %d",num,rem,sum);
    }else{
        printf("number must be greator then 0");
    }
    return 0;
}