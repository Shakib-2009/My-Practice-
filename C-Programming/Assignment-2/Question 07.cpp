#include <stdio.h>
#include <string.h>

int main() {
int calc , fnum , snum;
char operater;

printf("Enter 2 Numbers : ");
scanf("%d %d", &fnum , &snum);
printf("Which operater do you want (/,*,-,+,) : ");
scanf(" %c", &operater);

switch(operater){
	case '/':
	     calc = fnum / snum;
	     printf("%d", calc);
	     break;
    case '*': 
	     calc = fnum * snum;
	     printf("%d", calc);
	     break;
    case '-':
	     calc = fnum - snum;
	     printf("%d", calc);
	     break;
	case '+':
	     calc = fnum + snum;
	     printf("%d", calc);
	     break;
    default:
    	 printf("invalide Choice !");
}

    return 0;
}
