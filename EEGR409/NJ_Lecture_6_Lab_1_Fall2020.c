/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 6, Lab 1
   This program calculates the sum of the squares of two numbers.

   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz
*/

#include <stdio.h>
#include <math.h>

int square(int x) {
    int s1;
    s1 = pow(x, 2);

    return s1;
}

int sum_squares(int x1, int x2) {
    int s2;
    s2 = square(x1) + square(x2);

    return s2;
} 

void main() {
    int n1, n2, sum;
    
    printf("Enter two numbers, separated by a space: ");
    scanf("%d %d", &n1, &n2);

    sum = sum_squares(n1, n2);
    printf("The sum of the squares of %d and %d is %d", n1, n2, sum);
    
}