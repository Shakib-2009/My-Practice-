#include <stdio.h>
#include <string.h>

int main() {
int stdMarks[10], HighestMarks, LowestMarks,Total = 0,pass = 0, fail = 0;
float Average;

for(int i = 0; i < 10; i++){
	printf("Enter Student %d Marks : ", i + 1 );
	scanf("%d", &stdMarks[i]);
	
	if(i==0){
		HighestMarks = stdMarks[i];
	}else if(stdMarks[i] > HighestMarks){
		HighestMarks = stdMarks[i];
	}
	
    if(i==0){
		LowestMarks = stdMarks[i];
	}else if(stdMarks[i] < LowestMarks){
		LowestMarks = stdMarks[i];
	}
	Total = stdMarks[i] + Total;
	
	if(stdMarks[i] >= 50){
		pass +=1;
	}else{
		fail+=1;
	}
	
} 
Average = (float)Total / 10;

printf("\n \nHighest Marks : %d \n", HighestMarks);
printf("Lowest Marks : %d \n", LowestMarks);
printf("Average Marks : %.2f \n", Average);
printf("Pass = %d \n", pass);
printf("Fail = %d", fail);

    return 0;
}
