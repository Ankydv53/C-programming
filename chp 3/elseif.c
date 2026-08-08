#include<stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);
if(age > 0 && age <= 13){
printf("You are Child");
}else if(age >= 14 && age <= 15){
printf("You are Teenager");
}else if(age >= 16 && age <= 19){
printf("You are older");
}else if(age >= 20 && age <= 100){
printf("You are adult");
}else{
printf("Enter valid age");
}
printf("\nThankyou");
return 0;
}
