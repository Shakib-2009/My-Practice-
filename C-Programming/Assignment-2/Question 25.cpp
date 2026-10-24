#include <stdio.h>
#include <string.h>

int main() {
int numbers[10] = {42, 17, 83, 29, 65, 8, 94, 36, 51, 72};
for(int i = 9; i >= 0; i--){
	printf("%d \n", numbers[i]);
}

    return 0;
}
