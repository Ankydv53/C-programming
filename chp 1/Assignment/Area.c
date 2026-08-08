//Calculate area of circle and traingle
#include<stdio.h>
int main (){
//for area of square
printf("For area of circle\n");
float radius;
const float Pi = 3.14;
printf("Enter radius: ");
scanf("%f",&radius);
float areaC = 2 * Pi * radius * radius; //area of circle
printf("The area of circle is: %f\n",areaC);
printf("For area of Traingle\n");
float len;
float height;
printf("Enter length: ");
scanf("%f",&len);
printf("Enter height: ");
scanf("%f",&height);
float areaT = 0.5 * len * height;
printf("%f",areaT); 
return 0;
}
