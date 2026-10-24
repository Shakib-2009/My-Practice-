#include <stdio.h>
#include <string.h>

int findMax(int arr[] ,int size){
	int  Max = arr[0];
	for(int i = 1 ; i < size ; i++){
	
		if(arr[i] > Max){
			Max = arr[i];
		}
	}
	return Max;
}

int findMin(int arr[], int size){
	int Min = arr[0];
	for(int i = 1 ; i < size ; i++){
		if(arr[i] < Min){
			Min = arr[i];
		}
	}
	return Min;
}

int main(){
	int arrValue[] = {10, 20 , 30 , 80 , 50}, size;
	size = sizeof(arrValue)/4;
	
	int maxValue = findMax(arrValue, size);
	int minValue = findMin(arrValue, size);
	
	printf("Maximum Value : %d \n", maxValue);
	printf("Minimum Value : %d", minValue);
}
