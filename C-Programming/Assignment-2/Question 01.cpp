#include <stdio.h>
#include <string.h>

int main() {
printf(" Employee Salary Calculator \n \n");
	
	int Basic, Allowance, Bonus;
	printf(" Basic salary : ");
	scanf("%d", &Basic);
	printf(" Allowance: ");
	scanf("%d", &Allowance);
	printf(" Bonus: ");
	scanf("%d", &Bonus);
	
	printf("Total salary : %d", Basic + Allowance + Bonus);

    return 0;
}
