#include <stdio.h>
#include <string.h>

void updates(int *balance){
		int temp;
		printf("enter your Amount : ");
		scanf("%d", &temp);
		*balance = *balance - temp ;
}

int main(){
	int balance = 1000;
	printf("        your current Balance : %d\n\n", balance);
	
	
	
	printf("Want to whithdrwl Money if yes press 1 / no press 0 : ");
	int temp ; 
	scanf("%d", &temp);
	if(temp == 1){
		updates(&balance);
		printf("your Balance : %d", balance);
	}else if(temp == 0){
		printf("your Balance : %d", balance);
	}

}
