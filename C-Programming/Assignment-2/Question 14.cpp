#include <stdio.h>
#include <string.h>

int main() {
int fnum  ;
printf("Which Table You Want : ");
scanf("%d", &fnum);

for(int i=1; i <= 12 ; i++){

	printf("%d * %d = %d",fnum , i,i * fnum);



}

    return 0;
}
