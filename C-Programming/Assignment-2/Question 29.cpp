#include <stdio.h>
#include <string.h>

int main() {
char sentence[1000];
int vowel = 0 , space = 0, digit = 0,charecter = 0;

printf("Enter The Sentence: ");
fgets(sentence, sizeof(sentence), stdin);

for(int i = 0 ; sentence[i] != '\0'; i++){
	if(sentence[i] == 'a' || sentence[i] == 'e'|| sentence[i] == 'i'|| sentence[i] == 'o'|| sentence[i] == 'u'
|| sentence[i] == 'A' || sentence[i] == 'E'|| sentence[i] == 'I'|| sentence[i] == 'O'|| sentence[i] == 'U'	){

	vowel += 1;
	}
	if(sentence[i] >= '0' && sentence[i] <= '9'){
		digit += 1;
	}
	if(sentence[i] == ' '){
		space+=1;
	}
	charecter++;
}


printf("Vowel : %d \n", vowel);
printf("Space : %d \n", space);
printf("Digit : %d \n", digit);
printf("Charecter's : %d \n", charecter - 1);

    return 0;
}
