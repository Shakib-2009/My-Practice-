#include <stdio.h>
#include <string.h>

int main() {
char password[100];
int validation = 0;

printf("Enter The Password: ");
scanf("%99s", password);

for(int i = 0; password[i] != '\0'; i++){
	if(password[i] >= '0' && password[i] <= '9'){
		validation = 1;
		break;
	}
}

if(strlen(password) >= 8 && validation == 1){
	printf("Strong Password");
}else{
	printf("Weak Password");
}

    return 0;
}
