#include<stdio.h>
int main(){
    while(1){
        printf("Enter your Week-no. (1-7)\n\nEnter 0 To exit program: ");
        int choice;
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("\n\nMonday\n\n");
            break;
            case 2:
            printf("\n\nTuesday\n\n");
            break;
            case 3:
            printf("\n\nWednesday\n\n");
            break;
            case 4:
            printf("\n\nThursday\n\n");
            break;
            case 5:
            printf("\n\nFriday\n\n");
            break;
            case 6:
            printf("\n\nSaturday\n\n");
            break;
            case 7:
            printf("\n\nSunday\n\n");
            break;
            case 0:
            printf("\n\nExiting program....\n\n");
            return 0;
            default:
            printf("\n\nEnter a valid number :|\n\n");


        }
    }
    return 0;
}