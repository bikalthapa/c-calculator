#include<stdio.h>
#include<conio.h>
int main(){
	// Declaring Variables //
	int firstNumber, secondNumber, i, add, subtract, multiply, division, modolus;

	// this for loop will generates line at the top of output //
	printf("\t");
	for(i=0; i<100; i++){
		printf("-");
	};
	printf("\n");
	printf("\n\t\t\t\t\t\tCalculator App In C programming\n\n");
	// this for loop will generates line below "Calculator App In C Programming" //
	printf("\t");
	for(i=0; i<100; i++){
		printf("-");
	};
	
	
	//Taking input as firstNumber //
	printf("\n\n\n\t\tEnter First Number :");
	scanf("%i",&firstNumber);
	
	// taking input as secondNumber
	printf("\t\tEnter Second Number :");
	scanf("%i",&secondNumber);
	
	// Declaring Variables for Operation //
	add = firstNumber + secondNumber;
	subtract = firstNumber - secondNumber;
	multiply = firstNumber * secondNumber;
	division = firstNumber / secondNumber;
	modolus = firstNumber % secondNumber;
	
	// /Printing the results
	printf("\t\t Results");
	printf("\n\n\t\t %d + %d = %d\n",firstNumber,secondNumber,add);
	printf("\t\t %d - %d = %d\n",firstNumber,secondNumber,subtract);
	printf("\t\t %d * %d = %d\n",firstNumber,secondNumber,multiply);
	printf("\t\t %d / %d = %d\n",firstNumber,secondNumber,division);
	printf("\t\t %d mod %d = %d\n",firstNumber,secondNumber,modolus);
	
	// printing a line at the end of program //
	printf("\t");
	for(i=0; i<100; i++){
		printf("-");
	};
	printf("\n");
	
	
	
	return 0;
}
