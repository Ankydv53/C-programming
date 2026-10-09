#include<stdio.h>
int main(){
    float item[3],gstvalue,sum;
    printf("Enter price of 1st item: ");\
    scanf("%f",&item[0]);
    printf("Enter price of 2nd item: ");\
    scanf("%f",&item[1]);
    printf("Enter price of 3rd item: ");\
    scanf("%f",&item[2]);

    sum = (item[1]+item[2]+item[0]);
    gstvalue = sum*18/100 + sum;

    printf("Final price is %.2f.Rs",gstvalue);
    return 0;
}