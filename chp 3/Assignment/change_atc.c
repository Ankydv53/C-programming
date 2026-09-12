#include<stdio.h>
int main(){
    int amount,note10,note5,note1;
    printf("Enter withdrawl amount: ");
    scanf("%d",&amount);

    note10 = amount / 10;
    amount = amount % 10;
    note5 = amount / 5;
    amount = amount % 5;
    note1 = amount;
    printf("Notes of 10: %d\n",note10);
    printf("Notes of 5: %d\n",note5);
    printf("Notes of 1: %d\n",note1);
    return 0;
}