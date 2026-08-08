
#include<stdio.h>
int main (){
int Age;
char *Name[10]; //[10] is limit of that like max 10 length of word
printf("Enter your name: ");
scanf("%s",Name);   //here no need to & as we had specified space to it
printf("Enter your age: ");
scanf("%d",&Age);   //& is use to allocate location to store data
printf("Hello mr/miss %s, Welcome to C-Programming\n",Name);
printf("Your age is: %d",Age);
return 0;
}
