#include<stdio.h>
int main(){

    int num1,num2,choice;

    printf("Enter 1st no: ");
    scanf("%d",&num1);
    printf("Enter 2nd no: ");
    scanf("%d",&num2);
        
    while(1){

        printf("1.Maximum\n2.Display all numbers between the loop\n3.Sum and average\n4.Exit\n\nEnter your choice: ");
        scanf("%d",&choice);


        switch(choice){
            case 1:

            if(num1 > num2){
                printf("The maximum number is: %d\n\n",num1);
            }else{
                printf("The maximum number is: %d\n\n",num2);               
            }

            break;


            case 2:

            if(num1 < num2){
                printf("The number in between are:");
                int loop1 = num1;
                for(loop1 + 1; loop1 < num2 ; loop1++){
                    printf(" %d",loop1);
                }
                printf("\n\n");

            }else{
                printf("The number in between are:");
                int loop2 = num2;
                for(loop2 + 1; loop2 < num1 ; loop2++){
                    printf(" %d",loop2);
                }
                printf("\n\n");
            }
            break;


            case 3:
            int sum = num1 + num2;
            float avg = (float)(num1+num2)/2;
            printf("Sum of numbers are: %d\n",sum);
            printf("Average of numbers are: %.2f\n\n",avg);
            break;

            case 4:
            printf("Exiting program.....");
            return 0;


            default:
            printf("Enter valid choice\n\n");
        }



        }
    return 0;
}