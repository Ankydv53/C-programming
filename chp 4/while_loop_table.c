//table with while loop
#include<stdio.h>
int main(){
	int i = 1;
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(i <= 10){
		printf("%d",num);
		printf(" X %d = ",i);
		printf("%d\n",i * num);
		i++;
	}
	return 0;
}

