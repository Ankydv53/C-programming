//program: sum of first n numbers
// Concept: For loop
// Author: Ankit Yadav
// Date: 29-07-2026
#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	int sum = 0;
	for(int i = 1 ; i <= num ; i++){
		sum += i;
	}
	printf("%d",sum);
	return 0;
	
}
