#include <stdio.h>
#include <string.h>

int main() {
int input;
   
   printf("Enter how many hour car parked : ");
   scanf("%d", &input);
   
   if(input >= 2){
   	if(input < 3){
   		printf("your parking charge is : 100Rs");
	   }else if(input <= 5 && input >= 3){
	   	printf("your parking charge is : 200Rs");
	   }else
	   	printf("your parking charge is : 500Rs");
	   }else{
   	printf("your parking charge is : 100Rs");
   }

    return 0;
}
