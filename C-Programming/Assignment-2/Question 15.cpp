#include <stdio.h>
#include <string.h>

int main() {
int money[5]= {5000, 1000,500, 100},amount,count = 0;
printf("Enter A Amount : ");
scanf("%d", &amount);

for(int i = 0 ; i < 4; i++){
	count = amount / money[i];
	amount = amount % money[i];
	printf("%d = %d notes \n",money[i] , count);
}

    return 0;
}
