#include <stdio.h>
#include <string.h>

double increaseSalery(double *salery , int increment){
	double total = *salery / increment;
	total = total + *salery;
		
		return total ;
}

int main(){
	
	double salery = 50000;
	int increment = 10; 
	
	double total = increaseSalery(&salery , increment);
	
	printf("New Salery : %.2f",total );
	
	
	
}
