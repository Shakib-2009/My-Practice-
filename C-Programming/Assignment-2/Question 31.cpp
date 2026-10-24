#include <stdio.h>
#include <string.h>

int calculateSalery(int basicSalery , int allowence , int bonus){
	int totalSalery = basicSalery + allowence + bonus;
	return totalSalery;
}

int main(){
	int basic, allowance, bonus, total;
	printf("Enter The Salery : ");
	scanf("%d", &basic);
	
	printf("Enter The Allowence : ");
	scanf("%d", &allowance);
	
    printf("Enter The Bonus: ");
	scanf("%d", &bonus);
	
    int Total = calculateSalery(basic, allowance, bonus);
    printf("%d" , Total);
}
