//the variable data type can be char , int , float to run loops
#include<stdio.h>

int main(){
	int i = 1;
	int table;
	printf("Enter number to get table: ");
	scanf("%d",&table);

	for(i ; i<=10 ; i += 1){
		printf("%d",table);
		printf(" X %d =",i);
		printf(" %d\n",i * table);
	}
	return 0;
}
