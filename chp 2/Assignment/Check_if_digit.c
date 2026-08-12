#include<stdio.h>
int main(){
    char input;
    printf("Enter a character: ");
    scanf("%c",&input);
    if(input >= '0' && input <= '9'){
        printf("The character is digit");
    }else{
        printf("The character is not a digit");
    }
    return 0;
}