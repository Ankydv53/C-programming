//make stucture of box
#include<stdio.h>
int main(){
	int height,length;
	printf("Enter height: ");
	scanf("%d",&height);
	printf("Enter length: ");
	scanf("%d",&length);
	
	for(int i2=1;i2 <= height;i2++){
		printf("");
	for (int i=1;i <= length;i++){
		printf("*");
	}	
	printf("\n");
	}
	return 0;
}
