#include <stdio.h>
#include <string.h>

int main() {
int unit[12],Total = 0,highest,Lowest  ; 
float average;
for(int i = 0 ; i < 12; i++){
	printf("Enter The Month(%d) Unit: ", i+1);
	scanf("%d", &unit[i]); 
	Total = Total + unit[i];
	
	if(i == 0){
		highest = unit[i];
	}else if(unit[i] > highest){
		highest = unit[i];
	}
	
	if(i == 0){
		Lowest = unit[i];
	}else if(unit[i] < Lowest){
		Lowest = unit[i];
	}
}
average = (float)Total / 12;

printf("\n \nTotal units = %d \n",Total);
printf("Average units = %.2f \n",average);
printf("Highest units = %d \n",highest);
printf("Lowest units = %d \n",Lowest);

    return 0;
}
