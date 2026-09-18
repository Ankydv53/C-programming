#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);
    while(1){
        int choice;
        printf("1. Maximium\n");
        printf("2. Display all numbers between the given numbers\n");
        printf("3. Sum and average between the given numbers\n");
        printf("4. EXIT\n\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            if (num1 > num2) {
                    printf("Maximum number is: %d\n\n", num1);
                } else if (num2 > num1) {
                    printf("Maximum number is: %d\n\n", num2);
                } else {
                    printf("Both numbers are equal.\n\n");
                }
            break;

            case 2:
            printf("The numbers in between %d and %d are:",num1,num2);
            if(num1 > num2){
                int i = num2+1;
                for(i;i<num1;i++){
                    printf(" %d",i);
                }
            }else{
                    int i = num1+1;
                for(i;i<num2;i++){
                    printf(" %d",i);
                }
            }
            printf("\n\n");
            break;

            case 3:
            printf("The sum of numbers are:");
            int sum,i,n=0;
            if(num1 > num2){
                i = num2+1;
                for(i;i<num1;i++){
                    sum = sum + i;
                    n++;
                }
            }else{
                i = num1+1;
                for(i;i<num2;i++){
                    sum = sum + i;
                    n++;
                }
            }
            printf(" %d\n",sum);
            printf("Average of numbers are: %d\n\n",sum/n);
            
            break;

            case 4:
            printf("Exiting .......");
            return 0;
            break;

            default:
            printf("Enter a valid operaton\n\n");
        }
    }
    return 0;
}