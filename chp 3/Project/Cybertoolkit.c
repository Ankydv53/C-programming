// Program: Cyber Security Toolkit
// Concept: Nested switch + if-else
// Author: Ankit Yadav
// Date: 27-07-2026
#include<stdio.h>
	int main(){
		while(1){
		printf("========== Cyber Security Toolkit ==========");
		int Tools;
		int midexit;
		printf("\n1.Linux\n2.Networking\n3.Programming\n\nEnter Choice: ");
		scanf("%d",&Tools);
		switch(Tools){
			case 1:
			printf("===== Linux =====\n");
			printf("1.ls\n2.cd\n3.pwd");
			printf("\n====== Exit ======\n\n");
			
			int info1;
			printf("1.Get Info\n2.Exit\n\nEnter your choice: ");
			scanf("%d",&info1);
			switch(info1){
				case 1:
				printf("\n\n===== Linux information =====\n");
				printf("1.ls: lists files and folders.\n");
				printf("2.cd: changes directory.\n");
				printf("3.pwd: shows current folder path.\n");
				printf("============ Exit ============\n\n");
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Invalid input");
							}
							break;
				case 2:
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Enter valid operation");
							}break;
							}break;
			case 2:	
			printf("\n\n===== Networking =====\n");
			printf("1.Ip Address\n2.DNS\n3.HTTP\n");
			printf("========== Exit ==========\n\n");
			
			int info2;
			printf("1.Get Info\n2.Exit\n\nEnter your choice: ");
			scanf("%d",&info2);
			switch(info2){
				case 1:
				printf("\n\n===== Networking Information =====\n");
				printf("1.IP Address: a device’s unique network address.\n");
				printf("2.DNS: translates website names into IP addresses.\n");
				printf("3.HTTP: the web protocol used by browsers and servers to exchange pages.\n");
				printf("================ Exit ================\n\n");
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Invalid input");
							}
							break;
				case 2:
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Enter valid operation");
							}break;
							}break;
					
			case 3:	
			printf("===== Programming =====\n");
			printf("1.C\n2.Python\n3.Java");
			printf("========= Exit =========\n\n");
			
			int info3;
			printf("1.Get Info\n2.Exit\n\nEnter your choice: ");
			scanf("%d",&info3);
			switch(info3){
				case 1:
				printf("\n\n===== Programming information=====\n");
				printf("1.C: fast, low-level language for system software.\n");
				printf("2.Python: simple, high-level language for scripting and AI/data work.\n");
				printf("3.Java: object-oriented language used for apps and enterprise software.\n");
				printf("=============== Exit ================\n\n");
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Invalid input");
							}
							break;
				case 2:
				printf("Do you like C?\n1.Yes\n2.No\n\nEnter Your choice: ");
				scanf("%d",&midexit);
				if(midexit == 1){
					printf("Great! Keep practicing C.");
					}else if(midexit == 2){
						printf("No worries! Practice makes it easier.");
						}else{
							printf("Enter valid operation");
							}
							break;
				default:
				printf("Invalid input");			
					}
			default:
			printf("Invalid input");		
				}
		return 0;
}
}
	
