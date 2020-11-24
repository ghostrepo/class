/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 8, Lab 2
   This program provides the square of two numbers.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>

double square(double n) {
    n = n * n;

    return n;
}

void main() {
    double s0, s1, d0, d1;
    double *n0 = &d0;
    double *n1 = &d1;

    printf("Enter two numbers, separated by a space (i.e. 1 3): ");
    scanf("%lf %lf", n0, n1);

    s0 = square(*n0);
    s1 = square(*n1);

    printf("The squares of %.0f and %.0f are %.0f and %.0f", *n0, *n1, s0, s1);  
}