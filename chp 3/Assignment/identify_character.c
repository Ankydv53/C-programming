#include<stdio.h>
int main(){
	char ch;
	printf("Enter character: ");
	scanf("%c",&ch);
	if(ch >= 'A' && ch <= 'Z'){
		printf("Character is uppercased Alphabet");
	}else if(ch >= 'a' && ch <= 'z'){
		printf("Character is lowercased Alphabet");
	}else{
		printf("Character is not Alphabet");
	}
	return 0;
}
