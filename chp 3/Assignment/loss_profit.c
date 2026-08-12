#include<stdio.h>
int main(){
    int cost_price,sell_price;
    printf("Enter the cost of product: ");
    scanf("%d",&cost_price);
    printf("Enter sell price of product: ");
    scanf("%d",&sell_price);

    int final_price = sell_price - cost_price;

    if(final_price > 0){
        printf("The seller made a Profit of %d", final_price);
    }
    else if(final_price < 0){
        printf("The seller made a Loss of %d", -final_price);
    }
    else{
        printf("The seller sold the product at the same price");
    }

    return 0;
}