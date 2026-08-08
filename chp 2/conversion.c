//type conversion
#include<stdio.h>
int main(){
int a = 10;
float b = 25.5;  //here implicit conversion take place
float sum = a + b; 
printf("%f\n\n",sum);

int a1 = 10;
int b2 = 4;  
float sum1 = (float)a1 / b2;  //here explicit conversion take place
printf("%f",sum1);
return 0;
}
