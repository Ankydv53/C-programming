#include<stdio.h>
int main(){
    printf("Enter days late for returing: ");
    int days,fine;
    scanf("%d",&days);
    
    if(days > 0){
        if (days <= 5){
            fine = 10;
        }else if(days <= 10){
            fine = 20;
        }else{
            fine = 50;
        }
        printf("You have to give %d.Rs fine",fine);
    }else{
        printf("enter a valid days for late returning");
    }
    return 0;
}