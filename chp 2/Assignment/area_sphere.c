#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of sphere: ");
    scanf("%f",&radius);
    float area = 4 * 3.14 * radius * radius;
    printf("Area = %.2f",area);
    return 0;
}