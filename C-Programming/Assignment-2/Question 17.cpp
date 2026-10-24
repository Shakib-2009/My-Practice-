#include <stdio.h>
#include <string.h>

int main() {
int number = 25,guessNumber, count = 1 ;
printf("What is secret number : ");
 scanf("%d", &guessNumber);
 
while(1){

	if(guessNumber == number){
		printf("    YOU WON ! \n ");
		printf("your total Attempt = %d", 	count);
		break;
	}else if(guessNumber > number){
		printf("your number is too high \n");
	
		
	}else{
		printf("your number is too low \n");
	}
		printf("RETRY : ");
		scanf("%d", &guessNumber);
		count++;
}

    return 0;
}
