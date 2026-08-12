#include<stdio.h>
int main(){
    int x,y;
    printf("Enter X-Axis: ");
    scanf("%d",&x);
    printf("Enter Y-Axis: ");
    scanf("%d",&y);
     
    if(x > 0 && y > 0){
        printf("The x and y lies in 1st quadrant");
    }else if(x < 0 && y > 0){
        printf("The x and y lies in 2nd quadrant");
    }else if(x < 0 && y < 0){
        printf("The x and y lies in 3rd quadrant");
    }else if(x > 0 && y < 0){
        printf("The x and y lies in 4th quadrant");
    }else if(x == 0 && y > 0){
        printf("The ponit is parallel to positive y axis");
    }else if(x == 0 && y < 0){
        printf("The ponit is parallel to negative y axis");
    }else if(y == 0 && x > 0){
        printf("The ponit is parallel to positive x axis");
    }else if(y == 0 && x < 0){
        printf("The ponit is parallel to negative x axis");
    }else{
        printf("lies on the zero axis");
    }
    return 0;
}