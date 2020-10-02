//https://drive.google.com/drive/folders/19PDKsE1lPOw3Uk8vXiPNlJNhUax09LS8?usp=sharing
#include <stdio.h> //includes the input/output library
#include <math.h> // includes the math library

int main()
{
	double initial, interest_rate, monthly, interest, balance; //declaration of the variables used in the program

	printf("Enter the amount of loan: ");
	scanf("%lf", &initial); // scanf to get the initial loan amouont
	printf("Enter interest rate: ");
	scanf("%lf", &interest_rate); //scanf to get the interest rate
	printf("Enter the monthly payment ");
	scanf("%lf", &monthly); //scanf to ge the monthly payment
	
	balance = initial; // sents the balamce remaining to the iniital loan amount

	printf("\n+---------+----------+\n");
	printf("| Payment | Balance  |\n");
	printf("+---------+----------+\n");

	for (int i = 1; i <= 3; i++) { //for loop from 1 to 3 (3 included) to make it easier to print the elements in the table
		interest = ((interest_rate/100) / 12) * balance; //this calculates the amount of monthly interest to be added on
		balance = balance + interest - monthly; // this computes the new balance remaining after interest and a monthly payment
		printf("| %d       | %5.2f |\n", i, balance);
		
	}
	printf("+---------+----------+\n");



	return 0; //end of the program
}