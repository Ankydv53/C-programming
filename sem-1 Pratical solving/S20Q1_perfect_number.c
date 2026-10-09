#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter number: ");
    scanf("%d",&num);

    for(int i=1;i<num;i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }
    if(num == sum){
        printf("The %d is a perfect number",num);
    }else{
        printf("The %d is not a perfect number",num);
    }
    return 0;
}