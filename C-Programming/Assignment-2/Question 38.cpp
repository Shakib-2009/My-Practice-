#include <stdio.h>
#include <string.h>

int addStdMark(int AddMarks[]){
    int New;
	printf("Enter The New Marks : ");
	scanf("%d", &New);
	
	return New;
}
void displayMarks(int arr[] , int size){
	for(int i = 0 ; i < size; i++){
		printf("Marks %d = %d\n", i+1 , arr[i]);
	}
}

int highestMarks(int arr[], int size){
int highest =0;
	for(int i = 0 ; i < size; i++){
		if(i <= 0){
				highest = arr[0];
		}else{
			if(arr[i] > highest){
				highest = arr[i];
			}
		}
	}
	return highest;
}

int lowestMarks(int arr[], int size){
int lowest =0;
	for(int i = 0 ; i < size; i++){
		if(i <= 0){
				lowest = arr[0];
		}else{
			if(arr[i] < lowest){
				lowest = arr[i];
			}
		}
	}
	return lowest;
}

float calculateAverage(int arr[], int size){
	float average; 
	int total = 0;
	for(int i = 0 ; i < size ; i++){
		total = (float)total + arr[i];
	}
	
	average = (float)total / size; 
	return average;
}

int main(){
	int arrMarks[100] = {30 , 40}, size =0	, New, option = 0, count = 1;
	size = 2;

	
	
    
	while(option != 6){
		printf("\n          ---------------------------------------------------------------------------\n\n");
		printf("\n\n1. Add student marks\n2. Display marks\n3. Find highest mark\n4. Find lowest mar\n5. Calculate average\n6. Exit");
		printf("\n\nSelece Option Through Given The Number: ");
		
		scanf("%d", &option);

	if(option == 1){
    	if(size < 100){
    	New = addStdMark(arrMarks);
     	arrMarks[size] = New;
	    printf("\nNew Marks %d is Added\n\n", New);
	    size++;
		}else{
			printf("\nSTORAGE FULL\n");
		}

}else if(option == 2){

	displayMarks(arrMarks , size);
	}else if(option == 3){
	
		New = highestMarks(arrMarks , size);
		printf("highest Marks is : %d", New);
	}else if(option == 4){
		
		New = lowestMarks(arrMarks , size);
		printf("Lowest Marks is : %d", New);
	}else if(option == 5){
	    float average = calculateAverage(arrMarks , size);
	    printf("%.2f", average);
	}else{
		option = 6;
	}
		



	}

	
	
	
	
	
	
	
}
