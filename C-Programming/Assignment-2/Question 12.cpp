#include <stdio.h>
#include <string.h>

int main() {
int sales[7],Total = 0 ,Highestsales,Lowestsales;
float average ; 

for(int i = 0; i < 7 ; i++){
	printf("Enter day %d sales : ", i+1);
	scanf("%d", &sales[i]);
    Total = sales[i] + Total;
    
    if(i == 0){
    	Highestsales = sales[i];
	}else if(sales[i] > Highestsales){
    	Highestsales = sales[i];
    
	}
	
	  if(i == 0){
    	Lowestsales = sales[i];
	}else if(sales[i] < Lowestsales){
    	Lowestsales = sales[i];
    
	}
	
	
 
}
average = (float)Total / 7;
printf("\n \nTotal sales = %dRs \n", Total);
printf("Average sales = %.2f \n", average );
printf("Highest sales = %d \n", Highestsales);
printf("Lowestsales sales = %d", Lowestsales);

    return 0;
}
