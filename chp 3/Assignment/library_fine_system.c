#include<stdio.h>
int main(){
    int choice;
    printf("Select choice:\n1.Late for book returing\n2.Book returing on time\n\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice == 1){
        printf("How many days late for returing: ");
        int late_days;
        scanf("%d",&late_days);
        if(late_days <= 0){
            printf("Invalid number of days");
        }
        else if(late_days <= 5){
            printf("Youll need to pay fine of Rs.10");
        }
        else if(late_days <= 10){
            printf("Youll need to pay fine of Rs.20");
        }
        else{
            printf("Youll need to pay fine of Rs.50");
        }
    }
    else if(choice == 2){
        printf("Thanks for visiting.....\n\nNo pending fines.");
    }
    else{
        printf("Invalid choice");
        return 0;
    }
}