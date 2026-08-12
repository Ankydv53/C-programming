#include<stdio.h>
int main(){
    int a; //integer data type
    printf("Enter an integer: ");
    scanf("%d", &a);    
    float b; //float data type
    printf("Enter a float: ");
    scanf("%f", &b);
    double c; //double data type
    printf("Enter a double: ");
    scanf("%lf", &c);
    char d; //character data type
    printf("Enter a character: ");
    scanf(" %c", &d);
    const char *str[10]; //string data type
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Double: %.9lf\n", c);
    printf("Character: %c\n", d);
    printf("String: %s\n", str);
    return 0;   
}
