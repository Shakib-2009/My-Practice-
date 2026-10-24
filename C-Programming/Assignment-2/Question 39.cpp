#include <stdio.h>

void checkBalance(int balance){
	printf("Total Balance: %d", balance);
	printf("\n------------------------------------------------------\n");
}

void deposit(int *balance){
	printf("\nCurrent Balance: %d\n", *balance);
	printf("\n------------------------------------------------------\n");
	int dep;
	
    printf("Enter The Deposit Amount: ");
    scanf("%d", &dep);
    if(dep <= 0){
    	printf("invalid amount !");
	}else{
    *balance += dep;
    
    printf("Deposit Money : %d\n", dep);
    printf("Total Balance: %d", *balance);
	printf("\n------------------------------------------------------\n");
			
	}
    
}
	
void whithdrawl(int *balance){
	printf("\nCurrent Balance: %d\n", *balance);
	printf("\n------------------------------------------------------\n");
		int withdrawlAmount;
	
    printf("Enter The Whithdrawl Amount: ");
    scanf("%d", &withdrawlAmount);
    if(withdrawlAmount <= 0){
    	printf("invalid amount !");
	}else{
    *balance -= withdrawlAmount;
    
    printf("Whithdrawl Money : %d\n", withdrawlAmount);
    printf("Total Balance: %d", *balance);
	printf("\n------------------------------------------------------\n");
			
	}
}

int main(){
	int balance = 2000 ,choice = 0,value;
	
	while(choice != 4){
		printf("\n \nSelect an Option \n \n");
		printf("1. Balcnce \n2. Deposit \n3. Whithdrawl \n4. Exit \n\n: ");
	
		scanf("%d", &choice);
		printf("\n------------------------------------------------------\n");
		
	    switch(choice){
	    	case 1: 
	    	    checkBalance(balance);
	    	    break;
	    	case 2:
	    		 deposit(&balance);
	    		 break;
	        case 3:
	        	 whithdrawl(&balance);
	        	 break;
	        case 4:
	        	 choice = 4;
	        	 break;
	        default: 
	        printf("invalid choice !");
		}
}
	
	}
