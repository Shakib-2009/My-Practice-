#include <stdio.h>
#include <string.h>

int main() {
int input, reverse = 0,digit,sum = 0;

printf("Enter a Number: ");
scanf("%d", &input);

while(input > 0) {
	sum = sum + input % 10;
    reverse = reverse * 10 + input % 10;
    input = input / 10;
   
    digit++;
}

printf("Reverse : %d \n", reverse);
printf("digit : %d \n", digit - 1);
printf("sum  : %d \n", sum);

    return 0;
}
