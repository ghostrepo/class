/*  Write a program that asks the user 
    for an integer number and calculate 
    the number of digits by counting how 
    many times the number is divisible by 10
    Modifications: Make sure the user enters a number (input validation) 
*/
/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 4, Lab 2
   This program .

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void main() {
    #define DIV 10
    int digit_n = 1;
    double m, n;

    printf("Please enter an integer: \n");
    scanf("%lf", &n);

    m = fabs(n / DIV);
    while (m > 0) {
        if (m < 1 && m > 0) {
            printf("The integer is %d digits\n", digit_n);
            m = 0;
        }
        if (m >= 1 && m < 10) {
            digit_n++;
            printf("The integer is %d digits\n", digit_n);
            m = 0;
        }
        if (m >= 10) {
            m = m / DIV;
            digit_n++;
        }
    }
}