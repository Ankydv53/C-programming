#include<stdio.h>
int main(){
    int age;
    float percentage;
    char symbol;
    char *Name[10];
    
    printf("Enter your name: ");
    scanf("%s",&Name);
    printf("Your name is: %s\n",Name);

    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your age is: %d\n",age);

    printf("Enter your marks: ");
    scanf("%f",&percentage);
    printf("You have scored: %.2f\n",percentage);

    printf("Enter a character: ");
    scanf("%c",&symbol);
    printf("Your character is: %c\n",symbol);

    return 0;
}