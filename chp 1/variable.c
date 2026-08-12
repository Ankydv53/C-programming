//Im learning c programming language
#include<stdio.h>
int main (){
/*
This is multiline comment
in this program i learn about 
1.comments
2.data types
3.variable
4.printing output
*/
int Age = 18;
char Grade = 'A';
float percent = 89.71;
double pi = 3.14159265359;
const char *Name = "Ankit Yadav"; //for str data type we use "char *"
printf("Im %s\n",Name);
printf("Im %d old\n",Age);
printf("I Passed exam with: %c\n",Grade);
printf("I have scored: %f\n",percent);
printf("Value of pi: %lf\n",pi);
return 0;
}