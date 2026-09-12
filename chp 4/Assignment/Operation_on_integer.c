#include<stdio.h>
int main(){
    printf("Enter your number to perform action: ");
    int num,choice;
    scanf("%d",&num);
    while(1){
        printf("Choose choice:\n");
        printf("1.Check if even or odd\n");
        printf("2.Display its last digit\n");
        printf("3.Display all positive number below the number\n");
        printf("4.Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n\n");

        switch(choice){
            case 1:
            if(num % 2 == 0){
                printf("The number is even\n\n");
            }else{
                printf("The number is odd\n\n");
            }
            break;

            case 2:
            int last_digit = num % 10;
                if (last_digit < 0) {
                    last_digit = -last_digit;
                }
                printf("The last digit of %d is: %d\n", num, last_digit);
                break;
            break;

            case 3:
            printf("Postitve number below %d are:",num);
            if(num > 0){
                for(num;num > 1;num--){
                    printf(" %d",num-1);
                }
                printf("\n\n");
            }else{
                printf("Number is zero or negatve\n\n");
            }
            break;

            case 4:
            printf("Exiting program......");
            return 0;

            default:
            printf("Enter a valid choice !\n\n");
        }
    }
}