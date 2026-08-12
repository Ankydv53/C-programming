//Recursion
#include<stdio.h>
void hello(int count);

int main(){
	int count;
	printf("How many times: ");
	scanf("%d",&count);
	hello(count);
	return 0;
}

void hello(int count){
	if (count == 0){
		return;
	}
	printf("%d Hello world\n",count);
	hello(count - 1);
}
