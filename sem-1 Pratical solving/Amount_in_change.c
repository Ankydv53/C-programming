#include<stdio.h>
int main(){
    int amount,note5,note10,note1,rem;
    printf("Enter amount: ");
    scanf("%d",&amount);

    if(amount > 0){
        note10 = amount / 10;
        amount = amount % 10;
        note5 = amount / 5;
        amount = amount % 5;
        note1 = amount;
    
    printf("Coin of 10: %d\n",note10);
    printf("coin of 5: %d\n",note5);
    printf("coin of 1: %d\n",note1);
    }else{
        printf("inavlid amount");
    }

    return 0;
}