#include<stdio.h>
int main(){
    printf("Enter radius of sphere: ");
    float area,r;
    scanf("%f",&r);

    area = 4 * 3.14 * r * r;
    printf("Area of sphere is: %.2f",area);
    return 0;
}