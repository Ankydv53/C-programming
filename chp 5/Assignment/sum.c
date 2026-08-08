#include<stdio.h>
int sum(int a,int b);
int main(){
	int a,b;
	printf("Enter 1st no: ");
	scanf("%d",&a);
	printf("Enter 2nd no: ");
	scanf("%d",&b);
	
	int ans = sum(a,b);
	printf("Sum is: %d \n",ans);
	return 0;
}
int sum(int a,int b){
	return a + b;
}
