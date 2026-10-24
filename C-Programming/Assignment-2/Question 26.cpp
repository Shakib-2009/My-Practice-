#include <stdio.h>
#include <string.h>

int main() {
char emp[5][50] = {"shakib", "manoj","ayesha","rimaz", "yousuf"}, name[50],i;
int found = 0;
printf("Employee Name \n\n");
for(i = 0 ; i < 5; i++){
	printf("%s\n",emp[i]);
}
printf("\nEnter your Employe Name : ");
scanf("%49s", name);

for(i = 0 ; i < 5; i++){
	if(strcmp(emp[i],name) == 0){
	found = 1;
    }
}
if(found == 1){
	printf("Employe found");
}else{
	printf("Employe Not found");
}

    return 0;
}
