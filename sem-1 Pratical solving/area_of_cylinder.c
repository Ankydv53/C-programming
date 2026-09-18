#include<stdio.h>
int main(){
    float radius,height,area;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Enter height: ");
    scanf("%f",&height);

    area =2*3.14*radius*(radius + height);
    printf("Area of cylinder is : %.2f\n",area);
    return 0;
}