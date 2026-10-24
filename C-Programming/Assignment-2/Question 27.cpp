#include <stdio.h>
#include <string.h> 

int main(){

char students[10][50] = {"shakib", "shuhail","yousuf","ahmed","shafran","rafan","muneef","abdullah","javid","ramseen"};
char name[50] = {0};
int stdfound = 0;

printf("              Student Name Search \n \n");
printf("Enter Student Name :");
scanf("%49s", name);

for(int i = 0 ; i < 10 ; i++){
	if(strcmp(students[i],name )== 0){
		stdfound = 1;
		break;
	}
}

if(stdfound == 1){
	printf( "%d student found");
}else{
	printf("%d student not found");
}

}
