#include<stdio.h>
int main(){
    int num;
    printf("Enter number to perform action: ");
    scanf("%d",&num);
    while(1){
        int choice;
        printf("1. Check if it is even or odd.\n");
        printf("2. Display its last digit\n");
        printf("3. Display all positive numbers below the number\n");
        printf("4. EXIT\n\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:
            if(num % 2 == 0){
                printf("The number is even\n\n");
            }else{
                printf("The number is odd\n\n");
            }
            break;

            case 2:
            int rem = num % 10;
            printf("Last digit of %d is: %d\n\n",num,rem);
            break;

            case 3:
            if(num > 0){

                printf("positive number below %d are:",num);
                for(int i=1;i < num;i++){
                    printf(" %d",i);
                }
                printf("\n\n");
            }else{
                printf("the number is zero or less then zero\n\n");
            }
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