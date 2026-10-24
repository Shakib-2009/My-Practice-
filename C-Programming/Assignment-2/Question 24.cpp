#include <stdio.h>
#include <string.h>

int main() {
int number[10] = {50, 20, 10, 30, 40, 20, 10, 60, 30, 70}, dup[10] = {0},count = 0, i;

for(i = 0; i < 10 ; i++){
	for(int j = i + 1 ; j <= 9 ; j++ ){
		if(number[i] == number[j]){
			dup[count] = number[i] ;
			count++;
		}
	}
}
for(i = 0 ; i < count; i++){
	printf("%d \n", dup[i]);
}

    return 0;
}
