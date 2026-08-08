#include<stdio.h>

int amount();

int main(){
	int bal=0;
	while(1){
		printf("=============== A.T.M ===============\n\n");
		printf("1.Check balance\n2.Withdraw\n3.Deposit\n4.Exit\n\nEnter your choice: ");
		int choice;
		scanf("%d",&choice);
		
	switch(choice){
		case 1:
		printf("\nBalance: %d\n\n",bal);
		break;
		
		
		case 2:
		int num1 = amount();		
		if(num1 <= 0){
			printf("Invalid Amount!\n");
		}
		else if(num1 <= bal){
			bal -= num1;
			printf("₹%d withdrawn successfully.\n", num1);
			printf("Current Balance: %d\n\n", bal);
		}
		else{
			printf("Insufficient Balance!\n");
		}
		break;
		
		
		case 3:
		int num = amount();
		if(num > 0){
			bal += num;
			printf("₹%d deposited successfully.\n", num);
			printf("Current Balance: %d\n\n", bal);
		}else{
			printf("Invalid Amount!\n");
		}
		break;
		
		
		case 4:
		printf("Thankyou for visiting :) \n\n");
		return 0;
		
		
		default:
		printf("Enter valid Choice..!!!\n\n");
	}
}
	return 0;
}

	int amount(){
	int amt;
	printf("Enter Amount: ");
	scanf("%d",&amt);
	return amt;
}
	
	
	
	
	
	
	
	
	
