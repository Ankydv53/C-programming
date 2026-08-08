//logical statements
#include<stdio.h>
int main(){
printf("%d\n",1 == 1 && 0 == 0); //this will return 1 / True
printf("%d\n",1 == 2 && 0 == 1); //this will return 0 / False
printf("%d\n",1 != 1 || 1 != 0); //this will return 1 / True
printf("%d\n",2 != 2 || 1 != 1); //this will return 0 / False
printf("%d\n",! (1 > 2)); //this will return 1 / True
printf("%d\n",! (1 < 2));//this will return 0 / False
return 0;
}
