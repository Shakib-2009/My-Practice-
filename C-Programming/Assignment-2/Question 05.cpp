#include <stdio.h>
#include <string.h>

int main() {
int bankBalance = 3000 ,withdrawAmount, choice;

printf("Mars-tech PPL Bank \n \n");
printf("1. Account balance \n");
printf("2. Withdrawal amount \n");
printf("Which service do you want : ");
scanf("%d", &choice);

if(choice == 1 || choice == 2){
	if(choice == 1){
			printf(" \n \nYour Account balance is : %d", bankBalance);
	}else{
		 printf("Enter Your Amount to Whithdrawl : ");
         scanf("%d", &withdrawAmount);
		if(withdrawAmount <= bankBalance && withdrawAmount % 500 == 0){
			     printf("\n Current Balance = %d \n  Whithdrawl Amount = %d \n ",bankBalance - withdrawAmount , withdrawAmount  );
                 bankBalance = bankBalance - withdrawAmount;
		}else{
			printf("Invalid Whithdrawl amount !");
		}

	}

}else{
	printf("Input error : Pleas Enter Valid input !...");
}

    return 0;
}
