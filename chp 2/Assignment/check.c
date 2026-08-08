//check if num greator then 9 and smaller then or equal to 99, if True output = 1 and if False then output = 0
#include<stdio.h>
int main(){
int num;
printf("Enter a number: ");
scanf("%d",&num);
printf("%d",num > 9 && num <= 99);
return 0;
}
