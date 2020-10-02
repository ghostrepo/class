/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 2
   This program calculates loan balance in 1 month iterations.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    double loan;
    double int_rate;
    double pay;
    double ints;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    printf("Enter interest rate: ");
    scanf("%lf", &int_rate);
    printf("Enter monthly payment: ");
    scanf("%lf", &pay);

    printf("\n+-----------+-----------+\n");
    printf("| Payment   | Balance   |\n");
    printf("+-----------+-----------+\n");

    for (int i = 1; i <= 3; i++) {     
    ints = (int_rate/1200) * loan;
    loan = loan + ints - pay;
    printf("| %d         | %5.2f  |\n", i, loan);
    }
    printf("+-----------+-----------+");
}
