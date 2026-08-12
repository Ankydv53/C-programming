//Assignment statements
#include<stdio.h>
int main(){
int a = 10; // 1. =  :This assign rhs value to lhs
printf("%d\n",a);//output:10

a += 5;	// 2. += :This add rhs to lhs
printf("%d\n",a);//output:15

a -= 3;	// 3. -= :This mius rhs lhs
printf("%d\n",a);//output:12

a *= 3;	// 4. *= :This multiply rhs to lhs
printf("%d\n",a);//output:36

a /= 3;	// 5. /= :This divides rhs to lhs
printf("%d\n",a);//output:12

a %= 3;	// 6. %= :This 
printf("%d\n",a);//output:0

return 0;
}
