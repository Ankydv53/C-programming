#include<stdio.h>
int main(){
    int high,len;
    printf("Enter length: ");
    scanf("%d",&len);
    printf("Enter height: ");
    scanf("%d",&high);

    printf("Area of rectangle is: %d\n",len*high);
    printf("Perimeter of rectangle is: %d\n",2 * (len+high) );
    
    return 0;
}