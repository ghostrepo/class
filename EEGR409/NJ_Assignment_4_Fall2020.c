/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Assignment 2
   This program calculates loan balance in 1 month iterations.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    double loan, int_rate, pay, ints, tot_pay, bal, net_pay, net_int, net_bal;
    int i = 1;

    printf("Enter amount of loan: ");
    scanf("%lf", &loan);
    while (loan < 1000) {
        if (loan < 1000) {
            printf("INVALID LOAN AMOUNT: Loan amount must be more than 1000\n");
            scanf("%lf", &loan);
        }
    }

    printf("Enter interest rate: ");
    scanf("%lf", &int_rate);
    while ((int_rate > 10) || (int_rate < 2)) {
        if ((int_rate > 10) || (int_rate < 2)) {
            printf("INVALID INTEREST RATE: Interest rate must be between 2 and 10 percent\n");
            scanf("%lf", &int_rate);
        }
    }

    printf("Enter monthly payment: ");
    scanf("%lf", &pay);
    while (pay <= 0) {
        if (pay <= 0) {
            printf("INVALID MONTHLY PAYMENT: Monthly payment should be greater than 0\n");
            scanf("%lf", &pay);
        }
    }

    printf("+---------------+---------------+---------------+----------------+\n");
    printf("| Payment No    | Payment Amt   | Balance       | Total Payments |\n");
    printf("+---------------+---------------+---------------+----------------+\n");

    bal = loan;
    tot_pay = pay;
    net_int = 0;
    while (net_bal <= loan) {     
        ints = (int_rate/1200) * bal;
        bal = bal + ints - pay;
        printf("| %d \t\t| %.2f \t| %5.2f \t| %.2f \t |\n", i, pay, bal, tot_pay);
        tot_pay = tot_pay + pay;
        net_int = net_int + ints;
        net_bal = tot_pay - net_int;
        i++;
    }
    if (bal != 0) {
        tot_pay = tot_pay - pay + bal;
        pay = bal;
        bal = 0;
        printf("| %d \t\t| %.2f \t| %5.2f \t| %.2f \t |\n", i, pay, bal, tot_pay);
        
    }
    printf("+---------------+---------------+---------------+----------------+\n");

    printf("\nLoan Summary\n");
    printf("-----------------------------------------\n");
    printf("Total number of payments: \t%d\n", i);
    printf("Total interest paid:      \t$%.2f\n", net_int);
    printf("Total payments:           \t$%.2f\n", tot_pay);

    // Loan Summary-----------------------------------------
    // Total number of payments:22
    // Total interest paid:            $112.50
    // Total payments:                 $2112.50
}