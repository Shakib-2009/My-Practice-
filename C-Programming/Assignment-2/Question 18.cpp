#include <stdio.h>
#include <string.h>

int main() {
int overtime, payment = 0,overtimeHour = 0;
float workHour;

printf("Hour : ");
scanf("%f", &workHour);

	if(workHour > 40.00){
		overtimeHour = workHour - 40.00;
		overtime = (workHour - 40) * 500;
		payment = 40 * 500 ;
	}else{
		payment = workHour * 500 ;
		overtimeHour = 0;
		
	}


printf("Normal Working Hour  = %.2f \n",workHour);
printf("OverTime Hour = %d \n" ,overtimeHour);
printf("Normal salary =  %d \n",payment );
printf("OverTime Payment = %d", overtime);

    return 0;
}
