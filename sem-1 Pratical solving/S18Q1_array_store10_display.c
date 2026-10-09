#include<stdio.h>
int main(){
    int nums[10];
    printf("Enter 10 numbers: ");
    for(int i=0;i<=9;i++){
        scanf("%d",&nums[i]);
    }
    printf("Entered numbers are:");
    for(int i=9;i>=0;i--){
        printf(" %d",nums[i]);
    }
    return 0;
}