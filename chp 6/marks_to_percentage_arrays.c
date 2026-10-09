#include<stdio.h>
int main(){
    float marks[3],percent;
    printf("Enter marks obtained in maths: ");
    scanf("%f",&marks[0]);
    printf("Enter marks obtained in physics: ");
    scanf("%f",&marks[1]);
    printf("Enter marks obtained in chemistry: ");
    scanf("%f",&marks[2]);

    percent = (marks[0]+marks[1]+marks[2])/300*100;

    printf("You have obtained %.2f%%",percent);
    return 0;
}