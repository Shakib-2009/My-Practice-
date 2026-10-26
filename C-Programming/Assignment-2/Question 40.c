#include <stdio.h>
#include <string.h>

void addProduct(char arr[][100],int price[99],int quantity[99] ,int *size){
if(*size >= 99){
printf("Bag full");
}else{
	printf("Enter Your Product Name: ");
	scanf("%99s", arr[*size]);
		
printf("Enter the Price: ");
if (scanf("%d", &price[*size]) != 1 || price[*size] < 0) {
    printf("Invalid price!\n");
    return;
}

printf("Enter the Quantity: ");
if (scanf("%d", &quantity[*size]) != 1 || quantity[*size] <= 0) {
    printf("Invalid quantity!\n");
    return;
}
	
	*size += 1; 
	printf("Product detail Added \n");	
}

	
	
};

void displayProduct(char arr[][100],int price[99],int quantity[99], int *size){
	printf("\n Prodect Name \n");
	printf("-------------------- \n");
	printf("%-4s %-20s %-9s %-9s", "NO", "NAME", "PRICE", "QUANTITY\n\n");
	for(int i = 0 ; i<= *size - 1; i++){
		printf("%-4d %-20s %-11d %-11d\n", i+1 , arr[i] ,price[i],quantity[i]);
	}
	printf("\n--------------------\n");
	return; 
};

void searchProduct(char arr[][100], int size){
	char temp[100] = {0};
	int found = 0;
    printf("Search your Product: "); 
	if(scanf("%99s",temp) != 1){
		return;
	}

	
	for(int i = 0 ; i < size; i++){
		if(strcmp(arr[i], temp) == 0){
		   found = 1;
		   break;
		}
	}
	
	if(found){
		printf("Product %s Found\n \n", temp);
	}else{
		printf("Product %s Not Found !\n \n", temp);
	}
	
};

int calculateTotal(int price[99],int quantity[99], int size){
	int Total = 0; 
	for(int i = 0 ; i < size; i++){
		Total = Total + quantity[i] * price[i];
	}
return Total;
};

double applyDiscount(int *total){
	double discount;
	
	printf("how much discount: ");
	if (scanf("%lf", &discount) != 1 || discount < 0 || discount > 100){
		  printf("invalid discount !");
		  return *total;
	}else{
		  return *total - (*total * discount / 100.0);
	}
	

	 
};

int main(){
	char productArr[99][100] = {0};
	int price[99] = {0};
	int quantity[99] = {0};
	
	int size = 0 , choice = 0,total = 0;
	double finalAmount = 0;
	printf("%-40s %s","\n " , "Mini Shopping Management System ? \n");
	while(choice != 7){
		
		printf("\n1. Add Products\n2. Display Products\n3. Search Product\n4. Calculate Total\n5. Apply Discount\n6. Display Final Bill\n7. Exit\n\n");
		printf("Which service do you want: ");
		
if (scanf("%d", &choice) != 1) {
    break;
}	
	
if(choice >= 1 && choice <= 7){
	
		switch(choice){
			case 1: 
				addProduct(productArr ,price,quantity, &size);
				total = calculateTotal(price, quantity, size);
                finalAmount = total;
            	break; 
            case 2: 
                displayProduct(productArr ,price,quantity, &size);
                break;
            case 3: 
                 searchProduct(productArr , size);
                 break;
            case 4: 
                    total = calculateTotal(price,quantity, size);
                 	printf("Total: %d", total);
                 	break;
            case 5: 

                 finalAmount = applyDiscount(&total);
                 printf("%.2f",finalAmount );
                 break;
            case 6:
            printf("Final Bill: %.2f\n", finalAmount);
            	break;
            case 7:
            	printf("Thank you !");
            	break;
		}
		}else{
			printf("%-50s %s"," ","invalid input !\n\n");
		}

	}	
	
	

}
