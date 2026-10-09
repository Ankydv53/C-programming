#include<stdio.h>
int main(){
    int cost,sell,check;
    printf("Enter cost price: ");
    scanf("%d",&cost);

    printf("Enter sell price: ");
    scanf("%d",&sell);

    check = sell - cost;

    if (sell > cost) {
        printf("Seller has made profit of %d.Rs",check);
    }else{
        printf("seller has made loss of %d.Rs",-check);
    }

    return 0;
}