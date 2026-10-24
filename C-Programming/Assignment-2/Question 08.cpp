#include <stdio.h>
#include <string.h>

int main() {
int password = 12345;
char str[] = "Shakib";

printf("Welcome to Homepage \n \n");
printf("Enter your user name : ");
scanf("%s", &str);
printf("Enter your password : ");
scanf("%d", &password);

if( strcmp(str ,"Shakib") == 0 && password == 12345){
	printf("%d", &str);
	printf("Login Successful");
}else{
	printf("Invalid Username or Password !");
}

    return 0;
}
