#include <stdio.h>
#include <string.h>

int main() {
int C , F ,input  ;
float Output;
     printf("Temperature Converter \n \n")   ;
  printf("1. Celsius to Fahrenheit \n");
  printf("2. Fahrenheit to Celsius \n");
  printf("Which convershion do you want : ");
  
  scanf("%d", &input);
  
  switch(input){
  	case 1:
   	   printf("Enter Celsius Value : ");
  	   scanf("%d", &C);
  	   Output =   (C * 9.0/5.0) + 32;
	   printf("%.2f", Output);
	   break;
	case 2:
	   printf("Enter Fahrenheit Value : ");
  	   scanf("%d", &F);
	   Output = (F - 32) * 5.0/9.0;
	   printf("%.2f", Output);
	   break;
	   
	default:
		printf("invalid Choice !");
		break;
	
  }

    return 0;
}
