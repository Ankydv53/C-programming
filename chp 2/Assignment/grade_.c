#include<stdio.h>
int main(){
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks >= 90){
        printf("Distinction");
    }else if(marks >= 80){
        printf("First class");
    }else if(marks >= 70){
        printf("Second class");
    }else if(marks < 70 && marks >= 35){
        printf("pass class");
    }else{
      printf("Fail");
    }
    return 0;
}