#include <stdio.h>
#include <string.h>

int main() {
int factoricalNum , calc=1;
printf("Enter the positive Number : ");
scanf("%d", &factoricalNum);

for(int i = factoricalNum; i >= 1; i--){
	calc = calc * i;
	printf("value i = %d \n" ,i);
	printf("%d \n", calc);
}

    return 0;
}
