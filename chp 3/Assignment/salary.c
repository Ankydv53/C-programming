#include<stdio.h>
int main(){
    printf("Enter income: ");
    float income;
    scanf("%f",&income);
    float houserent = income * 0.10;
    float dearness = income * 0.30;
    float tax = income * 0.05;

    printf("Houserent: %.2f\n",houserent);
    printf("Dearness %.2f\n",dearness);
    printf("Tax: %.2f\n",tax);
    printf("Final income: %.2f\n",income-houserent-dearness,tax);
    return 0;
}