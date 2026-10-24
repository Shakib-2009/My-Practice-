#include <stdio.h>
#include <string.h>

int main() {
int num;

 printf("ENTER ONE NUMBER : ");
 scanf("%d",&num);
 
 if(num > 0){
 	printf("Positive Number \n");
 }else if(num < 0){
 	printf("Negative Number \n");
 }else{
 	printf("Your Number is 0 ZERO \n");
 }
 
 if(num % 2 == 0){
 	printf("Even Number");
 }else{
 	printf("Odd Number");
 }

    return 0;
}
