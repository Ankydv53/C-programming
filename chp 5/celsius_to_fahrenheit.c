#include<stdio.h>

float cctf(float n);

int main(){
    printf("Enter celsius: ");
    float c;
    scanf("%f",&c);
    printf("Fahrenheit: %.2f",cctf(c));
    return 0;
}

float cctf(float n){
    return (n * 9/5) + 32;
}