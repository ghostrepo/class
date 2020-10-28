/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Quiz 4
   This program prints a factorial chart.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/
#include <stdio.h>
#include <math.h>

void main () {
    int m, n, fact;
    fact = 1;

    printf("Enter the number of factorials: ");
    scanf("%d", &n);
    while (n < 1 || n > 10) {
        if (n < 1 || n > 10) {
            printf("INVALID INPUT: Please enter a number between 1 and 10\n");
            scanf("%d", &n);
        }
    }

    printf("Table of factorials\n\n");
    printf("Number\tFactorial\n");
    printf("------\t---------\n");
    m = n;
    while (n > 0) {
        while (m > 0) {
            fact = fact * m;
            m--;
        }
        printf("%d\t%d\n", n, fact);
        m = n - 1;
        fact = 1;
        n--;
    }
}