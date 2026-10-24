#include <stdio.h>
#include <string.h>

int main() {
char name[5][99] = {0} , tempNM[1][99] = {};
int marks[5] = {0}, i,temp;

for(i = 0 ; i<5; i++){
	printf("Enter The %d Student Name : ",i + 1);
	scanf("%98s", name[i]);
	printf("And %s 's Marks : " ,name[i]);
	scanf("%d", &marks[i]);
}

for(int k = 0 ; k < 4; k++){
	
	for(i = 0; i < 4 - k ; i++){
	if(marks[i] < marks[i+1]){
		temp = marks[i + 1];
		marks[i + 1] = marks[i];
		marks[i] = temp;
		
	            strcpy(tempNM[0], name[i + 1]);
                strcpy(name[i + 1], name[i]);
                strcpy(name[i], tempNM[0]);
	}
}
}
printf("\n%-20s %s\n", "Student", "Mark");
printf("--------------------------\n");

for (i = 0; i < 5; i++) {
    printf("%-20s %d\n", name[i], marks[i]);
}

    return 0;
}
