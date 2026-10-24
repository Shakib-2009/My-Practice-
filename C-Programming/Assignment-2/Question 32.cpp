#include <stdio.h>
#include <string.h>

char calculateGrade(float average){
	
	if(average >= 75){
		return 'A';}
	
	else if(average >= 65){
		return 'B';}
	
	else if(average >= 50){
		return 'C';}
	
	else if(average >= 35){
	    return 'S';}
	
	else{
		return 'F';
	
	}
}

int main(){
	float average; 
	char grade; 
	
	printf("Enter The Average Mark: ");
	scanf("%f", &average);
	
	grade = calculateGrade(average);
	
	printf("Average : %.2f \n", average);
	printf("Grade : %c", grade);
	

}
