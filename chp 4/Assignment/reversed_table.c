//reversed table
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(int i=10;i >= 1;i--){
		printf("%d X ",num);
		printf("%d = ",i);
		printf("%d\n",i * num);
	}
	return 0;
}
