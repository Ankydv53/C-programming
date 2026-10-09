#include<stdio.h>
int main(){
    printf("Enter digits: ");
    int digit,rem,sum=0;
    scanf("%d",&digit);

    while(digit > 0){
        rem = digit % 10;
        if(rem % 2 == 0){
            sum = sum + rem;
        }
        digit = digit /10;
    }
    printf("The sum of even number is: %d",sum);
    return 0;
}