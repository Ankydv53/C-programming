#include<stdio.h>
int main(){
	int Marks;
	printf("Enter Marks: ");
	scanf("%d",&Marks);
	if(Marks >= 35 && Marks < 101){
		printf("Pass\n");
		if (Marks >= 90){
			printf("Great Job\n");
		}else{
			printf("Good Job\n");
		}
	}else if(Marks > 100){
		printf("Invalid marks");
	}else{
		printf("Fail");
	}
	return 0;
}
