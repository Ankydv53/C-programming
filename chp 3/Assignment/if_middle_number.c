//TO check the middle number:

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 1st value: ");
    scanf("%d",&a);
    printf("Enter 2nd value: ");
    scanf("%d",&b);
    printf("Enter 3rd value: ");
    scanf("%d",&c);

    if(a > b && a < c){
        printf("The middle number is: %d",a);
    }else if(b > a && b < c){
        printf("The middle number is: %d",b);
    }else{
        printf("The middle number is: %d",c);
    }
    return 0;
}