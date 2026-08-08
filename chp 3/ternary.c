#include<stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);
char *check = (age >= 18) ? "Eligible for vote" : "Not Eligible for vote";
printf("%s",check);
return 0;
}
