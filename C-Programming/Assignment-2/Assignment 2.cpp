#include <stdio.h>
#include <string.h>
//int main(){
                //	Question 1
                
//	printf(" Employee Salary Calculator \n \n");
//	
//	int Basic, Allowance, Bonus;
//	printf(" Basic salary : ");
//	scanf("%d", &Basic);
//	printf(" Allowance: ");
//	scanf("%d", &Allowance);
//	printf(" Bonus: ");
//	scanf("%d", &Bonus);
//	
//	printf("Total salary : %d", Basic + Allowance + Bonus);


                //	Question 2


//	int Product1 = 500, Product2 = 750 , Product3 = 1200, Quantity, Total = 0;
//	printf("Quantity of Product 1 : ");
//	scanf("%d", &Quantity);
//	Total = Product1 * Quantity;
//	printf("Quantity of Product 2: ");
//	scanf("%d", &Quantity);
//	Total = Product2 * Quantity + Total;
//	printf("Quantity of Product 3: ");
//	scanf("%d", &Quantity);
//	Total = Product3 * Quantity + Total;
//	
//	printf("Total Amount : %d", Total);


                //	Question 3
//    int subCount = 3, subMarks = 0 ; 
//    float  Avarage = 0;
//    
//	printf("Enter you Programing score : ") ;
//    scanf("%d", &subMarks);
//    Avarage = subMarks ;
//    printf("Enter you Database score : ") ;
//    scanf("%d", &subMarks);
//    Avarage = Avarage + subMarks ;
//    printf("Enter you Networking score : ") ;
//    scanf("%d", &subMarks);
//    Avarage = Avarage + subMarks ;
//    Avarage = Avarage / subCount;
//    printf("Avarage = %.2f \n", Avarage);
//    
//    if(Avarage >= 75){
//    	printf("Result = A");
//    	
//	}else if(Avarage >= 65){
//		printf("Result = B");
//	
//	}else if(Avarage >= 55){
//		printf("Result = C");
//    
//    }else if(Avarage >= 40){
//		printf("Result = S");
//		
//	}
//	else{
//		printf("Result = FAIL");
//	}



               //Question 4


//int price = 10 , unit, total;
//
//printf("Electrycity Bill \n \n");
//printf("Enter Customer Unit :");
//scanf("%d", &unit);
//
//if(unit / 100 >= 1){
//	total =  100 * price;
//	unit = unit - 100;
//	
//	if(unit / 100 >= 1){
//		price = 15;
//	    total = total + 100 * price;
//		unit = unit - 100;
//	}else{
//	if(unit > 0){
//		price = 15;
//		total = total + unit * price;
//	}
//    }
//    if(unit > 0){
//    	price = 20;
//    	total = total + unit * price;
//}
//}else{
//	if(unit > 0){
//		price = 10;
//		total = total + unit * price;
//	}
//	
//}
//printf("Total = %d Rs", total);
//

               //Question 5

//
//int bankBalance = 3000 ,withdrawAmount, choice;
//
//printf("Mars-tech PPL Bank \n \n");
//printf("1. Account balance \n");
//printf("2. Withdrawal amount \n");
//printf("Which service do you want : ");
//scanf("%d", &choice);
//
//if(choice == 1 || choice == 2){
//	if(choice == 1){
//			printf(" \n \nYour Account balance is : %d", bankBalance);
//	}else{
//		 printf("Enter Your Amount to Whithdrawl : ");
//         scanf("%d", &withdrawAmount);
//		if(withdrawAmount <= bankBalance && withdrawAmount % 500 == 0){
//			     printf("\n Current Balance = %d \n  Whithdrawl Amount = %d \n ",bankBalance - withdrawAmount , withdrawAmount  );
//                 bankBalance = bankBalance - withdrawAmount;
//		}else{
//			printf("Invalid Whithdrawl amount !");
//		}
//
//	}
//
//}else{
//	printf("Input error : Pleas Enter Valid input !...");
//}


               //Question 6
    

//int C , F ,input  ;
//float Output;
//     printf("Temperature Converter \n \n")   ;
//  printf("1. Celsius to Fahrenheit \n");
//  printf("2. Fahrenheit to Celsius \n");
//  printf("Which convershion do you want : ");
//  
//  scanf("%d", &input);
//  
//  switch(input){
//  	case 1:
//   	   printf("Enter Celsius Value : ");
//  	   scanf("%d", &C);
//  	   Output =   (C * 9.0/5.0) + 32;
//	   printf("%.2f", Output);
//	   break;
//	case 2:
//	   printf("Enter Fahrenheit Value : ");
//  	   scanf("%d", &F);
//	   Output = (F - 32) * 5.0/9.0;
//	   printf("%.2f", Output);
//	   break;
//	   
//	default:
//		printf("invalid Choice !");
//		break;
//	
//  }
//        


               //Question 7
               
               
//int calc , fnum , snum;
//char operater;
//
//printf("Enter 2 Numbers : ");
//scanf("%d %d", &fnum , &snum);
//printf("Which operater do you want (/,*,-,+,) : ");
//scanf(" %c", &operater);
//
//switch(operater){
//	case '/':
//	     calc = fnum / snum;
//	     printf("%d", calc);
//	     break;
//    case '*': 
//	     calc = fnum * snum;
//	     printf("%d", calc);
//	     break;
//    case '-':
//	     calc = fnum - snum;
//	     printf("%d", calc);
//	     break;
//	case '+':
//	     calc = fnum + snum;
//	     printf("%d", calc);
//	     break;
//    default:
//    	 printf("invalide Choice !");
//}

               //Question 8
//               
//int password = 12345;
//char str[] = "Shakib";
//
//printf("Welcome to Homepage \n \n");
//printf("Enter your user name : ");
//scanf("%s", &str);
//printf("Enter your password : ");
//scanf("%d", &password);
//
//if( strcmp(str ,"Shakib") == 0 && password == 12345){
//	printf("%d", &str);
//	printf("Login Successful");
//}else{
//	printf("Invalid Username or Password !");
//}

               //Question 9
               
//int num;
//
// printf("ENTER ONE NUMBER : ");
// scanf("%d",&num);
// 
// if(num > 0){
// 	printf("Positive Number \n");
// }else if(num < 0){
// 	printf("Negative Number \n");
// }else{
// 	printf("Your Number is 0 ZERO \n");
// }
// 
// if(num % 2 == 0){
// 	printf("Even Number");
// }else{
// 	printf("Odd Number");
// }

               //Question 10
               
//   int input;
//   
//   printf("Enter how many hour car parked : ");
//   scanf("%d", &input);
//   
//   if(input >= 2){
//   	if(input < 3){
//   		printf("your parking charge is : 100Rs");
//	   }else if(input <= 5 && input >= 3){
//	   	printf("your parking charge is : 200Rs");
//	   }else
//	   	printf("your parking charge is : 500Rs");
//	   }else{
//   	printf("your parking charge is : 100Rs");
//   }


               //Question 11
//               
//    int Attendence,present = 0 , absent = 0 ;
//    printf("Employee Attendance \n");
//    printf("Present = 1 ,  Absent = 0 \n \n");
//    
//    for(int i = 1; i <= 7 ; i++){
//    	printf("Enter day %d Attendence", i);
//    	scanf("%d", &Attendence);
//    	
//    	if(Attendence == 1 || Attendence == 0){
//    	    if(Attendence == 1){
//    	    	present += 1;
//			}else{
//				absent += 1;
//			}
//		}else{
//			printf("Type error: Please Enter Valid Key-word (1 or 0) \n");
//			
//				printf("Enter day %d Attendence", i);
//    	        scanf("%d", &Attendence);		
//				i--;	
//		}
//	}
//	
//	printf("Total Present days = %d \n", present);
//	printf("Total Absent days = %d \n", absent);
//	printf("Attendence percentage = %.2f", (present * 100.0) / 7);


               //Question 12
//
//int sales[7],Total = 0 ,Highestsales,Lowestsales;
//float average ; 
//
//for(int i = 0; i < 7 ; i++){
//	printf("Enter day %d sales : ", i+1);
//	scanf("%d", &sales[i]);
//    Total = sales[i] + Total;
//    
//    if(i == 0){
//    	Highestsales = sales[i];
//	}else if(sales[i] > Highestsales){
//    	Highestsales = sales[i];
//    
//	}
//	
//	  if(i == 0){
//    	Lowestsales = sales[i];
//	}else if(sales[i] < Lowestsales){
//    	Lowestsales = sales[i];
//    
//	}
//	
//	
// 
//}
//average = (float)Total / 7;
//printf("\n \nTotal sales = %dRs \n", Total);
//printf("Average sales = %.2f \n", average );
//printf("Highest sales = %d \n", Highestsales);
//printf("Lowestsales sales = %d", Lowestsales);
//

//                Question 13

//int stdMarks[10], HighestMarks, LowestMarks,Total = 0,pass = 0, fail = 0;
//float Average;
//
//for(int i = 0; i < 10; i++){
//	printf("Enter Student %d Marks : ", i + 1 );
//	scanf("%d", &stdMarks[i]);
//	
//	if(i==0){
//		HighestMarks = stdMarks[i];
//	}else if(stdMarks[i] > HighestMarks){
//		HighestMarks = stdMarks[i];
//	}
//	
//    if(i==0){
//		LowestMarks = stdMarks[i];
//	}else if(stdMarks[i] < LowestMarks){
//		LowestMarks = stdMarks[i];
//	}
//	Total = stdMarks[i] + Total;
//	
//	if(stdMarks[i] >= 50){
//		pass +=1;
//	}else{
//		fail+=1;
//	}
//	
//} 
//Average = (float)Total / 10;
//
//printf("\n \nHighest Marks : %d \n", HighestMarks);
//printf("Lowest Marks : %d \n", LowestMarks);
//printf("Average Marks : %.2f \n", Average);
//printf("Pass = %d \n", pass);
//printf("Fail = %d", fail);


//                Question 14

//int fnum  ;
//printf("Which Table You Want : ");
//scanf("%d", &fnum);
//
//for(int i=1; i <= 12 ; i++){
//
//	printf("%d * %d = %d",fnum , i,i * fnum);
//
//
//
//}

//                Question 15

//int money[5]= {5000, 1000,500, 100},amount,count = 0;
//printf("Enter A Amount : ");
//scanf("%d", &amount);
//
//for(int i = 0 ; i < 4; i++){
//	count = amount / money[i];
//	amount = amount % money[i];
//	printf("%d = %d notes \n",money[i] , count);
//}
//

//                Question 16

//int unit[12],Total = 0,highest,Lowest  ; 
//float average;
//for(int i = 0 ; i < 12; i++){
//	printf("Enter The Month(%d) Unit: ", i+1);
//	scanf("%d", &unit[i]); 
//	Total = Total + unit[i];
//	
//	if(i == 0){
//		highest = unit[i];
//	}else if(unit[i] > highest){
//		highest = unit[i];
//	}
//	
//	if(i == 0){
//		Lowest = unit[i];
//	}else if(unit[i] < Lowest){
//		Lowest = unit[i];
//	}
//}
//average = (float)Total / 12;
//
//printf("\n \nTotal units = %d \n",Total);
//printf("Average units = %.2f \n",average);
//printf("Highest units = %d \n",highest);
//printf("Lowest units = %d \n",Lowest);


//                Question 17



//int number = 25,guessNumber, count = 1 ;
//printf("What is secret number : ");
// scanf("%d", &guessNumber);
// 
//while(1){
//
//	if(guessNumber == number){
//		printf("    YOU WON ! \n ");
//		printf("your total Attempt = %d", 	count);
//		break;
//	}else if(guessNumber > number){
//		printf("your number is too high \n");
//	
//		
//	}else{
//		printf("your number is too low \n");
//	}
//		printf("RETRY : ");
//		scanf("%d", &guessNumber);
//		count++;
//}

//                Question 18


//int overtime, payment = 0,overtimeHour = 0;
//float workHour;
//
//printf("Hour : ");
//scanf("%f", &workHour);
//
//	if(workHour > 40.00){
//		overtimeHour = workHour - 40.00;
//		overtime = (workHour - 40) * 500;
//		payment = 40 * 500 ;
//	}else{
//		payment = workHour * 500 ;
//		overtimeHour = 0;
//		
//	}
//
//
//printf("Normal Working Hour  = %.2f \n",workHour);
//printf("OverTime Hour = %d \n" ,overtimeHour);
//printf("Normal salary =  %d \n",payment );
//printf("OverTime Payment = %d", overtime);



//                Question 19



//int factoricalNum , calc=1;
//printf("Enter the positive Number : ");
//scanf("%d", &factoricalNum);
//
//for(int i = factoricalNum; i >= 1; i--){
//	calc = calc * i;
//	printf("value i = %d \n" ,i);
//	printf("%d \n", calc);
//}



//                Question 20


//int input, reverse = 0,digit,sum = 0;
//
//printf("Enter a Number: ");
//scanf("%d", &input);
//
//while(input > 0) {
//	sum = sum + input % 10;
//    reverse = reverse * 10 + input % 10;
//    input = input / 10;
//   
//    digit++;
//}
//
//printf("Reverse : %d \n", reverse);
//printf("digit : %d \n", digit - 1);
//printf("sum  : %d \n", sum);


//                Question 21

//
//int product[10]={100, 200, 50, 80, 150, 300, 75, 120, 250, 90}, input,found = 0;
//
//printf("Enter the price : ");
//scanf("%d", &input);
//
//for(int i = 0; i < 10 ; i++){
//	if(input == product[i]){
//	     found = 1;
//		 break;
//}
//}
//if(found == 0){
//	printf("Product Price Not Found");
//}else{
//	printf("Product Price Found");
//}

//                Question 22

//int Num[10] = {},i,temp;
//
//for(i = 0; i < 10 ; i++){
//	printf("Enter Student's Marks : ");
//	scanf("%d", &Num[i]);
//}
//
//for(int j = 0; j < 10; j++){
//
//for(i = 0; i < 8 ; i++){
//	if(Num[i] > Num[i + 1]){
//		temp = Num[i + 1];
//		Num[i + 1] = Num[i];
//		Num[i] = temp;
//	}
//	
//
//}}
//	for(int j =0; j < 10 ; j++){
//		printf("%d \n", Num[j]);
//	}


//                Question 23

//int transactions[10] = {5000, 12000, 3000, 20000, 8000,15000, 2000, 10000, 7000, 18000};
//int Total = 0, Highest = 0, Lowest = 0,temp = 0,i;
//
//for(i = 0 ; i < 10; i++){
//	Total = Total + transactions[i];
//}
//printf("Total deposits : %d\n", Total);
//
//for(i = 0 ; i < 10; i++){
//	if(transactions[i] > 10000){
//		temp++;
//	}
//}
//printf("Number of transactions above Rs.10,000 : %d\n", temp);
//
//for(i = 0 ; i < 10; i++){
//	if(i == 0){
//		Highest = transactions[0];
//	}else{
//		if(transactions[i] > Highest){
//			Highest = transactions[i];
//		}
//	}
//}
//printf("Highest transaction : %d\n",Highest);
//
//
//for(i = 0 ; i < 10; i++){
//	if(i == 0){
//		Lowest = transactions[0];
//	}else{
//		if(transactions[i] < Lowest){
//			Lowest = transactions[i];
//		}
//	}
//}
//printf("Lowest transaction : %d\n",Lowest);
//


//                Question 24

//int number[10] = {50, 20, 10, 30, 40, 20, 10, 60, 30, 70}, dup[10] = {0},count = 0, i;
//
//for(i = 0; i < 10 ; i++){
//	for(int j = i + 1 ; j <= 9 ; j++ ){
//		if(number[i] == number[j]){
//			dup[count] = number[i] ;
//			count++;
//		}
//	}
//}
//for(i = 0 ; i < count; i++){
//	printf("%d \n", dup[i]);
//}

//                Question 25

//int numbers[10] = {42, 17, 83, 29, 65, 8, 94, 36, 51, 72};
//for(int i = 9; i >= 0; i--){
//	printf("%d \n", numbers[i]);
//}


//                Question 26

//char emp[5][50] = {"shakib", "manoj","ayesha","rimaz", "yousuf"}, name[50],i;
//int found = 0;
//printf("Employee Name \n\n");
//for(i = 0 ; i < 5; i++){
//	printf("%s\n",emp[i]);
//}
//printf("\nEnter your Employe Name : ");
//scanf("%49s", name);
//
//for(i = 0 ; i < 5; i++){
//	if(strcmp(emp[i],name) == 0){
//	found = 1;
//    }
//}
//if(found == 1){
//	printf("Employe found");
//}else{
//	printf("Employe Not found");
//}

//                Question 27

//char students[10][50] = {"shakib", "shuhail","yousuf","ahmed","shafran","rafan","muneef","abdullah","javid","Ramseen"};
//char name[49] = {0};
//int stdfound = 0;
//
//printf("             Student Name Search \n \n");
//printf("Enter Student Name :");
//scanf("%49s", name);
//
//for(int i = 0 ; i < 10 ; i++){
//	if(strcmp(students[i],name )== 0){
//		stdfound = 1;
//		break;
//	}
//}
//
//if(stdfound == 1){
//	printf("student found");
//}else{
//	printf("student not found");
//}

//                Question 28

//char password[100];
//int validation = 0;
//
//printf("Enter The Password: ");
//scanf("%99s", password);
//
//for(int i = 0; password[i] != '\0'; i++){
//	if(password[i] >= '0' && password[i] <= '9'){
//		validation = 1;
//		break;
//	}
//}
//
//if(strlen(password) >= 8 && validation == 1){
//	printf("Strong Password");
//}else{
//	printf("Week Password");
//}

//                Question 29

//char sentence[1000];
//int vowel = 0 , space = 0, digit = 0,charecter = 0;
//
//printf("Enter The Sentence: ");
//fgets(sentence, sizeof(sentence), stdin);
//
//for(int i = 0 ; sentence[i] != '\0'; i++){
//	if(sentence[i] == 'a' || sentence[i] == 'e'|| sentence[i] == 'i'|| sentence[i] == 'o'|| sentence[i] == 'u'
//|| sentence[i] == 'A' || sentence[i] == 'E'|| sentence[i] == 'I'|| sentence[i] == 'O'|| sentence[i] == 'U'	){
//
//	vowel += 1;
//	}
//	if(sentence[i] >= '0' && sentence[i] <= '9'){
//		digit += 1;
//	}
//	if(sentence[i] == ' '){
//		space+=1;
//	}
//	charecter++;
//}
//
//
//printf("Vowel : %d \n", vowel);
//printf("Space : %d \n", space);
//printf("Digit : %d \n", digit);
//printf("Charecter's : %d \n", charecter - 1);


//                Question 30

//char name[5][99] = {0} , tempNM[1][99] = {};
//int marks[5] = {0}, i,temp;
//
//for(i = 0 ; i<5; i++){
//	printf("Enter The %d Student Name : ",i + 1);
//	scanf("%98s", name[i]);
//	printf("And %s 's Marks : " ,name[i]);
//	scanf("%d", &marks[i]);
//}
//
//for(int k = 0 ; k < 4; k++){
//	
//	for(i = 0; i < 4 - k ; i++){
//	if(marks[i] < marks[i+1]){
//		temp = marks[i + 1];
//		marks[i + 1] = marks[i];
//		marks[i] = temp;
//		
//	            strcpy(tempNM[0], name[i + 1]);
//                strcpy(name[i + 1], name[i]);
//                strcpy(name[i], tempNM[0]);
//	}
//}
//}
//printf("\n%-20s %s\n", "Student", "Mark");
//printf("--------------------------\n");
//
//for (i = 0; i < 5; i++) {
//    printf("%-20s %d\n", name[i], marks[i]);
//}

//}


//                Question 31


//int calculateSalery(int basicSalery , int allowence , int bonus){
//	int totalSalery = basicSalery + allowence + bonus;
//	return totalSalery;
//}
//
//int main(){
//	int basic, allowance, bonus, total;
//	printf("Enter The Salery : ");
//	scanf("%d", &basic);
//	
//	printf("Enter The Allowence : ");
//	scanf("%d", &allowance);
//	
//    printf("Enter The Bonus: ");
//	scanf("%d", &bonus);
//	
//    int Total = calculateSalery(basic, allowance, bonus);
//    printf("%d" , Total);
//}


//                Question 32

//
//char calculateGrade(float average){
//	
//	if(average >= 75){
//		return 'A';}
//	
//	else if(average >= 65){
//		return 'B';}
//	
//	else if(average >= 50){
//		return 'C';}
//	
//	else if(average >= 35){
//	    return 'S';}
//	
//	else{
//		return 'F';
//	
//	}
//}
//
//int main(){
//	float average; 
//	char grade; 
//	
//	printf("Enter The Average Mark: ");
//	scanf("%f", &average);
//	
//	grade = calculateGrade(average);
//	
//	printf("Average : %.2f \n", average);
//	printf("Grade : %c", grade);
//	
//
//}

//                Question 33

//int findMax(int arr[] ,int size){
//	int  Max = arr[0];
//	for(int i = 1 ; i < size ; i++){
//	
//		if(arr[i] > Max){
//			Max = arr[i];
//		}
//	}
//	return Max;
//}
//
//int findMin(int arr[], int size){
//	int Min = arr[0];
//	for(int i = 1 ; i < size ; i++){
//		if(arr[i] < Min){
//			Min = arr[i];
//		}
//	}
//	return Min;
//}
//
//int main(){
//	int arrValue[] = {10, 20 , 30 , 80 , 50}, size;
//	size = sizeof(arrValue)/4;
//	
//	int maxValue = findMax(arrValue, size);
//	int minValue = findMin(arrValue, size);
//	
//	printf("Maximum Value : %d \n", maxValue);
//	printf("Minimum Value : %d", minValue);
//}

//                Question 34

//void swap(int *a,int *b){
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
//
//int main(){
//	int a = 10  , b = 20 ;
//	
//	swap(&a , &b);
//	printf("A value : %d \nB value : %d", a, b);
//	
//	
//}


//                Question 35


//void updates(int *balance){
//		int temp;
//		printf("enter your Amount : ");
//		scanf("%d", &temp);
//		*balance = *balance - temp ;
//}
//
//int main(){
//	int balance = 1000;
//	printf("        your current Balance : %d\n\n", balance);
//	
//	
//	
//	printf("Want to whithdrwl Money if yes press 1 / no press 0 : ");
//	int temp ; 
//	scanf("%d", &temp);
//	if(temp == 1){
//		updates(&balance);
//		printf("your Balance : %d", balance);
//	}else if(temp == 0){
//		printf("your Balance : %d", balance);
//	}
//
//}

//                Question 36

//
//int calculateSum(int arr[] , int size){
//int sum = 0;
//	for(int i = 0; i<size; i++){
//		sum = arr[i] + sum; 
//	}
//	return sum; 
//}
//
//int main(){
//	int arr[]  = {10, 20 , 30};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	
//	int sum  = calculateSum(arr , size);
//	
//	printf("Sum Array : %d", sum);
//}


//                Question 37


//double increaseSalery(double *salery , int increment){
//	double total = *salery / increment;
//	total = total + *salery;
//		
//		return total ;
//}
//
//int main(){
//	
//	double salery = 50000;
//	int increment = 10; 
//	
//	double total = increaseSalery(&salery , increment);
//	
//	printf("New Salery : %.2f",total );
//	
//	
//	
//}


//                Question 38

//int addStdMark(int AddMarks[]){
//    int New;
//	printf("Enter The New Marks : ");
//	scanf("%d", &New);
//	
//	return New;
//}
//void displayMarks(int arr[] , int size){
//	for(int i = 0 ; i < size; i++){
//		printf("Marks %d = %d\n", i+1 , arr[i]);
//	}
//}
//
//int highestMarks(int arr[], int size){
//int highest =0;
//	for(int i = 0 ; i < size; i++){
//		if(i <= 0){
//				highest = arr[0];
//		}else{
//			if(arr[i] > highest){
//				highest = arr[i];
//			}
//		}
//	}
//	return highest;
//}
//
//int lowestMarks(int arr[], int size){
//int lowest =0;
//	for(int i = 0 ; i < size; i++){
//		if(i <= 0){
//				lowest = arr[0];
//		}else{
//			if(arr[i] < lowest){
//				lowest = arr[i];
//			}
//		}
//	}
//	return lowest;
//}
//
//float calculateAverage(int arr[], int size){
//	float average; 
//	int total = 0;
//	for(int i = 0 ; i < size ; i++){
//		total = (float)total + arr[i];
//	}
//	
//	average = (float)total / size; 
//	return average;
//}
//
//int main(){
//	int arrMarks[100] = {30 , 40}, size =0	, New, option = 0, count = 1;
//	size = 2;
//
//	
//	
//    
//	while(option != 6){
//		printf("\n          ---------------------------------------------------------------------------\n\n");
//		printf("\n\n1. Add student marks\n2. Display marks\n3. Find highest mark\n4. Find lowest mar\n5. Calculate average\n6. Exit");
//		printf("\n\nSelece Option Through Given The Number: ");
//		
//		scanf("%d", &option);
//
//	if(option == 1){
//    	if(size < 100){
//    	New = addStdMark(arrMarks);
//     	arrMarks[size] = New;
//	    printf("\nNew Marks %d is Added\n\n", New);
//	    size++;
//		}else{
//			printf("\nSTORAGE FULL\n");
//		}
//
//}else if(option == 2){
//
//	displayMarks(arrMarks , size);
//	}else if(option == 3){
//	
//		New = highestMarks(arrMarks , size);
//		printf("highest Marks is : %d", New);
//	}else if(option == 4){
//		
//		New = lowestMarks(arrMarks , size);
//		printf("Lowest Marks is : %d", New);
//	}else if(option == 5){
//	    float average = calculateAverage(arrMarks , size);
//	    printf("%.2f", average);
//	}else{
//		option = 6;
//	}
//		
//
//
//
//	}

	
	
//                Question 39

//void checkBalance(int balance){
//	printf("Total Balance: %d", balance);
//	printf("\n------------------------------------------------------\n");
//}
//
//void deposit(int *balance){
//	printf("\nCurrent Balance: %d\n", *balance);
//	printf("\n------------------------------------------------------\n");
//	int dep;
//	
//    printf("Enter The Deposit Amount: ");
//    scanf("%d", &dep);
//    if(dep <= 0){
//    	printf("invalid amount !");
//	}else{
//    *balance += dep;
//    
//    printf("Deposit Money : %d\n", dep);
//    printf("Total Balance: %d", *balance);
//	printf("\n------------------------------------------------------\n");
//			
//	}
//    
//}
//	
//void whithdrawl(int *balance){
//	printf("\nCurrent Balance: %d\n", *balance);
//	printf("\n------------------------------------------------------\n");
//		int withdrawlAmount;
//	
//    printf("Enter The Whithdrawl Amount: ");
//    scanf("%d", &withdrawlAmount);
//    if(whithdrawl <= 0){
//    	printf("invalid amount !");
//	}else{
//    *balance -= withdrawlAmount;
//    
//    printf("Whithdrawl Money : %d\n", withdrawlAmount);
//    printf("Total Balance: %d", *balance);
//	printf("\n------------------------------------------------------\n");
//			
//	}
//}
//
//int main(){
//	int balance = 2000 ,choice = 0,value;
//	
//	while(choice != 4){
//		printf("\n \nSelect an Option \n \n");
//		printf("1. Balcnce \n2. Deposit \n3. Whithdrawl \n4. Exit \n\n: ");
//	
//		scanf("%d", &choice);
//		printf("\n------------------------------------------------------\n");
//		
//	    switch(choice){
//	    	case 1: 
//	    	    checkBalance(balance);
//	    	    break;
//	    	case 2:
//	    		 deposit(&balance);
//	    		 break;
//	        case 3:
//	        	 whithdrawl(&balance);
//	        	 break;
//	        case 4:
//	        	 choice = 4;
//	        	 break;
//	        default: 
//	        printf("invalid choice !");
//		}
//}
//	
//	}
//		


//                Question 40

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
