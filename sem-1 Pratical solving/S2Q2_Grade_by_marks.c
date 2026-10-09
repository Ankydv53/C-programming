#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks < 100 && marks >= 0){
        if(marks >= 90){
            printf("Distinction");
        }else if(marks >= 80){
            printf("First class");
        }else if(marks >= 70){
            printf("Second class");
        }else if(marks >= 50){
            printf("Third class");
        }else if(marks >= 30){
            printf("Pass class");
        }else{
            printf("Fail");
        }
    }else{
        printf("Invalid marks!");
    }
    return 0;
}