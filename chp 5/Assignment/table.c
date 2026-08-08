#include<stdio.h>
int table(int n);
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n); //argument
	table(n);
	return 0;
}
int table(int n){ //perimeter
	for(int i=1;i <= 10;i++){
		printf("%d\n",i * n);
	}
}
