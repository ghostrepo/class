/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 9, Lab 1
   This program swaps the contents of two variables.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

void swap(double *n0, double *n1) {
    double *swap0 = n0;
    double *swap1 = n1;

    double a = *n0;
    double b = *n1;

    *swap0 = b;
    *swap1 = a;
}

void main() {
    double a = 12.5;
    double b = -10.1;

    printf("PRE-SWAP\n");
    printf("The content of VARIABLE 1 is %.1f\n", a);
    printf("The content of VARIABLE 2 is %.1f\n", b);
    swap(&a, &b);
    printf("\nPOST-SWAP\n");
    printf("The content of VARIABLE 1 is %.1f\n", a);
    printf("The content of VARIABLE 2 is %.1f\n", b);
}
