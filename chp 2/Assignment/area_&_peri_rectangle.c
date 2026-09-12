#include<stdio.h>
int  main(){
    int length,breath,area,perimeter;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breath: ");
    scanf("%d",&breath);
    area = length * breath;
    perimeter = 2 * (length + breath);
    printf("The area is: %d\n",area);
    printf("The perimeter is: %d\n",perimeter);
    return 0;
}