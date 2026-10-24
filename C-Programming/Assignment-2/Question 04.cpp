#include <stdio.h>
#include <string.h>

int main() {
int price = 10 , unit, total;

printf("Electrycity Bill \n \n");
printf("Enter Customer Unit :");
scanf("%d", &unit);

if(unit / 100 >= 1){
	total =  100 * price;
	unit = unit - 100;
	
	if(unit / 100 >= 1){
		price = 15;
	    total = total + 100 * price;
		unit = unit - 100;
	}else{
	if(unit > 0){
		price = 15;
		total = total + unit * price;
	}
    }
    if(unit > 0){
    	price = 20;
    	total = total + unit * price;
}
}else{
	if(unit > 0){
		price = 10;
		total = total + unit * price;
	}
	
}
printf("Total = %d Rs", total);

    return 0;
}
