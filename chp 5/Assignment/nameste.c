#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
	while(1){
		int location;
		printf("1.Indian\n2.French\n3.Exit\n\nEnter choice: ");
		scanf("%d",&location);
		switch(location){
			case 1:
			Namaste();
			break;
			case 2:
			Bonjour();
			break;
			case 3:
			printf("Exiting program.......\n\n");
			return 0;
			default:
			printf("Enter Indian or french\n\n");
		}
	}
	return 0;
}


void Namaste(){
	printf("Namaste\n\n");
}
void Bonjour(){
	printf("Bonjour\n\n");
}
	
