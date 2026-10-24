#include <stdio.h>
#include <string.h>

int main() {
int Product1 = 500, Product2 = 750 , Product3 = 1200, Quantity, Total = 0;
	printf("Quantity of Product 1 : ");
	scanf("%d", &Quantity);
	Total = Product1 * Quantity;
	printf("Quantity of Product 2: ");
	scanf("%d", &Quantity);
	Total = Product2 * Quantity + Total;
	printf("Quantity of Product 3: ");
	scanf("%d", &Quantity);
	Total = Product3 * Quantity + Total;
	
	printf("Total Amount : %d", Total);

    return 0;
}
