/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 4, Lab 2
   This program 
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>
#include <math.h>

void main() {
    double n, b, m;
    // int b;

    printf("Please enter an integer: \n");
    scanf("%lf", &n);
   
    printf("This program outputs a table of squares\n");
    for (int i = 0; i <= n; i++) {
        b = pow(i, 2);
        printf("%d\t%1.0f\n", i, b);
    }

    m = n;
    while (m > 0) {
        if (m >= 1) {
            m--;
        }
        if (m < 1 && m != 0) {
            b = pow(n, 2);
            printf("%1.2f\t%1.2f\n", n, b);
            m = 0;
        }
    }

    }