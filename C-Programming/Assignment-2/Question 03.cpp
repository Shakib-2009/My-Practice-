#include <stdio.h>
#include <string.h>

int main() {
int subCount = 3, subMarks = 0 ; 
    float  Avarage = 0;
    
	printf("Enter you Programing score : ") ;
    scanf("%d", &subMarks);
    Avarage = subMarks ;
    printf("Enter you Database score : ") ;
    scanf("%d", &subMarks);
    Avarage = Avarage + subMarks ;
    printf("Enter you Networking score : ") ;
    scanf("%d", &subMarks);
    Avarage = Avarage + subMarks ;
    Avarage = Avarage / subCount;
    printf("Avarage = %.2f \n", Avarage);
    
    if(Avarage >= 75){
    	printf("Result = A");
    	
	}else if(Avarage >= 65){
		printf("Result = B");
	
	}else if(Avarage >= 55){
		printf("Result = C");
    
    }else if(Avarage >= 40){
		printf("Result = S");
		
	}
	else{
		printf("Result = FAIL");
	}

    return 0;
}
