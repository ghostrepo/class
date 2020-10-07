/* Name: Noah Johnson
   Class: EEGR409.001 - C Programming
   Lecture 4, Lab 1
   This program computes the sum of integers 1 to N.
   https://drive.google.com/drive/u/1/folders/1WBvVVJNSQyjJDzKVG782_Thkz8WAvdNz

*/

#include <stdio.h>

void main() {
    int i, n, m;
    n = i = 0;

    printf("This program computes the sum of integers 1 to N.\n");
    printf("Please enter the value for N: \n");
    scanf("%d", &n);

    m = n;
    while (i < n) {
        m = m + i;
        i++;
    }

    printf("The sum is %d", n);  
}