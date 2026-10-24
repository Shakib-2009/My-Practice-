#include <stdio.h>
#include <string.h>

int main() {
int Num[10] = {},i,temp;

for(i = 0; i < 10 ; i++){
	printf("Enter Student's Marks : ");
	scanf("%d", &Num[i]);
}

for(int j = 0; j < 10; j++){

for(i = 0; i < 9 ; i++){
	if(Num[i] > Num[i + 1]){
		temp = Num[i + 1];
		Num[i + 1] = Num[i];
		Num[i] = temp;
	}
	

}}
	for(int j =0; j < 10 ; j++){
		printf("%d \n", Num[j]);
	}

    return 0;
}
