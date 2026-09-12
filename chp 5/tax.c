#include<stdio.h>
float tax(float n);

int main(){
	float n;
	printf("Enter price: ");
	scanf("%f",&n);
	float price = n + tax(n);
	printf("The Actual price: %.2f\n",n);
	printf("The price with include tax: %.2f\n",price);
	printf("The tax: %.2f\n",tax(n));
	return 0;
}

float tax(float n){
	return n * 0.18;
}
