#include <stdio.h>
#include <string.h>

int main() {
int transactions[10] = {5000, 12000, 3000, 20000, 8000,15000, 2000, 10000, 7000, 18000};
int Total = 0, Highest = 0, Lowest = 0,temp = 0,i;

for(i = 0 ; i < 10; i++){
	Total = Total + transactions[i];
}
printf("Total deposits : %d\n", Total);

for(i = 0 ; i < 10; i++){
	if(transactions[i] > 10000){
		temp++;
	}
}
printf("Number of transactions above Rs.10,000 : %d\n", temp);

for(i = 0 ; i < 10; i++){
	if(i == 0){
		Highest = transactions[0];
	}else{
		if(transactions[i] > Highest){
			Highest = transactions[i];
		}
	}
}
printf("Highest transaction : %d\n",Highest);


for(i = 0 ; i < 10; i++){
	if(i == 0){
		Lowest = transactions[0];
	}else{
		if(transactions[i] < Lowest){
			Lowest = transactions[i];
		}
	}
}
printf("Lowest transaction : %d\n",Lowest);

    return 0;
}
