#include<stdio.h>
int main(){
    printf("Enter number: ");
    int num,idx=0;
    scanf("%d",&num);
    if(num > 1){
        for(int i=1;i<=num;i++){
            if(num % i == 0){
                idx++;
            }
        }
        if(idx > 2){
            printf("%d is not prime",num);
        }else{
            printf("%d is prime",num);
        }
    }else{
        printf("%d is not prime",num);
    }
    return 0;

}