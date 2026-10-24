#include <stdio.h>
#include <string.h>

int main() {
int Attendence,present = 0 , absent = 0 ;
    printf("Employee Attendance \n");
    printf("Present = 1 ,  Absent = 0 \n \n");
    
    for(int i = 1; i <= 7 ; i++){
    	printf("Enter day %d Attendence", i);
    	scanf("%d", &Attendence);
    	
    	if(Attendence == 1 || Attendence == 0){
    	    if(Attendence == 1){
    	    	present += 1;
			}else{
				absent += 1;
			}
		}else{
			printf("Type error: Please Enter Valid Key-word (1 or 0) \n");
			
				printf("Enter day %d Attendence", i);
    	        scanf("%d", &Attendence);		
				i--;	
		}
	}
	
	printf("Total Present days = %d \n", present);
	printf("Total Absent days = %d \n", absent);
	printf("Attendence percentage = %.2f", (present * 100.0) / 7);

    return 0;
}
