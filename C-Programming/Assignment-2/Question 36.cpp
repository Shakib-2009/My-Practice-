#include <stdio.h>
#include <string.h>

int calculateSum(int arr[] , int size){
int sum = 0;
	for(int i = 0; i<size; i++){
		sum = arr[i] + sum; 
	}
	return sum; 
}

int main(){
	int arr[]  = {10, 20 , 30};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	int sum  = calculateSum(arr , size);
	
	printf("Sum Array : %d", sum);
}
