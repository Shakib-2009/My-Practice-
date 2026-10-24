#include <stdio.h>
#include <string.h>

int main() {
int product[10]={100, 200, 50, 80, 150, 300, 75, 120, 250, 90}, input,found = 0;

printf("Enter the price : ");
scanf("%d", &input);

for(int i = 0; i < 10 ; i++){
	if(input == product[i]){
	     found = 1;
		 break;
}
}
if(found == 0){
	printf("Product Price Not Found");
}else{
	printf("Product Price Found");
}

    return 0;
}
